#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
#include<queue>
using namespace std;
const int INF=100000000;
__int64 n,m,i,j=0,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
bool used[100001];
main()
{
  freopen("missions.in","r",stdin);
  freopen("missions.out","w",stdout);

 scanf ("%I64d",&n);

 for (i=1;i<=n;i++)
  {
      scanf ("%I64d%I64d",&a[i],&b[i]);
      if (a[i]>j)j=a[i],c=i;
      if (b[i]>u)u=b[i],v=i;
  }

   used[c]=true;
   used[v]=true;

    __int64 sum=0;

   if (c==v)
    {
        sum=a[c]+b[c];

        printf ("%I64d\n%I64d",sum,c);

       for (i=1;i<=n;i++)
        if (!used[i])printf (" %I64d",i);

     return 0;
    }

    if (b[c]>=a[v])
    {
                sum=a[c]+b[v]+a[v];

        printf ("%I64d\n%I64d %I64d",sum,v,c);

       for (i=1;i<=n;i++)
        if (!used[i])printf (" %I64d",i);

     return 0;
    }

                    sum=a[c]+b[v]+b[c];

        printf ("%I64d\n%I64d %I64d",sum,c,v);

       for (i=1;i<=n;i++)
        if (!used[i])printf (" %I64d",i);

return 0;
}
