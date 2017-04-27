#include <stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
__int64 gh=0,z=0,l,i,j,c=0,m,n,a[15],r,b[15],d[15],v=0;
__int64 power(__int64 x,__int64 y)
 {
     int i,sd=1;
     for (i=1;i<=y;i++)
      sd*=x;

      return sd;
 }
main()
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%I64d",&n);

m=n;

 a[1]=1;
 d[1]=1;
  for (i=2;i<=9;i++)
   {
     a[i]=a[i-1]*2;
      d[i]=d[i-1]+a[i];
   }

    while (n>0)
     {
         b[c]=n%10;
         c++;
         n/=10;
     }

      for (i=c-1;i>=0;i--)
       {
           if (b[i]>=1)
            {
                if (b[i]>1)z=1;
            }
            else if (b[i]==0 && z==0)gh=1;
       }

      if (gh==0){printf ("%I64d",d[c]);}
      else
       {
           z=0;
           gh=0;
           for (i=c-2;i>=0;i--)
            {
                z++;
                if (b[i]>=1){if (b[i]>2)b[i]=2;gh=z;break;}
            }
            if (gh==0){printf ("%I64d",d[c-1]+1);return 0;}


                 int u=0;
               for (i=power(10,c-1);i<=m;i++)
                {
                   if (i>=power(10,c-1)*2)break;
                      int h=i,o=0;
                      while (h>0)
                       {
                           if (h%10>1)o=1;
                           h/=10;
                       }
                       if (o==0)u++;

                }


                 printf ("%I64d",d[c-1]+u);
             }



 return 0;
}
