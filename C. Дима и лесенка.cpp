#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
__int64 max1=-INF,a[1000001],c=0,v=0,i,j,k,n,m,l,r,b[1000001],d[1000001],f[1000006];
main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    scanf ("%I64d",&n);

     for (i=1;i<=n;i++)
     {
      scanf ("%I64d",&a[i]);
       f[i]=a[i];
     }
      scanf ("%I64d",&m);

      for (i=1;i<=m;i++)
       scanf ("%I64d%I64d",&b[i],&d[i]);

       j=1;

         for (i=1;i<=m;i++)
          {
             if (b[i]>max1)
              {
                  if (max1!=-INF)f[b[i]]=max(f[max1],f[b[i]]);
                  max1=b[i];
              }
              printf ("%I64d\n",f[max1]);

              f[max1]+=d[i];

          }


return 0;
}
