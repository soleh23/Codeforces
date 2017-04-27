#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
int b[100001],a[1000001],m,n,i,j=0,k,c=0,v,p=123,d,l;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d%d",&n,&d,&l);

  for (i=1;i<=n;i++)
   {
     if (i%2==1)a[i]=l,c+=a[i];
     else a[i]=1,c--;
    
   }
   
      for (i=1;i<=n;i++)
       {
         if (i%2==0)
          {
             while (c>d && a[i]<l)
             {
              a[i]++;
              c--;
             }
          }
          else 
           {
             while (c>d && a[i]>1)
             {
              a[i]--;
              c--;
             }
           }
       }
    if (c!=d){printf ("-1");return 0;}
       for (i=1;i<=n;i++)
        printf ("%d ",a[i]);
  //system ("pause");
return 0; 
}
