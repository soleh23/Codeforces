#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
const int INF=1000000001;
__int64 max_ans=0,num,f[1000001],a[1000001],i,j,k,l,c=0,v=0,n,m,r;
main()
{
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);

 scanf("%I64d%I64d",&n,&m);

  for (i=1;i<=n;i++)
     scanf("%I64d",&a[i]);

   sort (a+1,a+n+1);

   if (m==0)
    {
        c=a[1];
        for (i=2;i<=n;i++)
          {
              if (c==a[i])v++;
              else
                 {
                   if (max_ans<v)max_ans=v,num=c;
                   v=0;
                   c=a[i];
                 }
          }
          printf ("%I64d %I64d",max_ans+1,num);
          return 0;
    }


     f[1]=a[1];
     num=a[1];

    for (i=2;i<=n;i++)
     f[i]=f[i-1]+a[i];

     for (i=1;i<=n;i++)
      {
         l=1;
         r=i;

         while (l<r)
          {
              k=(l+r)/2;

              if ((a[i]*k)-(f[i]-f[i-k])<m)l=k+1;
              else r=k;

          }
         if ((a[i]*r)-(f[i]-f[i-r])>m)r--;

         if (max_ans<r)max_ans=r,num=a[i];
      }

      printf ("%I64d %I64d",max_ans,num);

return 0;
}
