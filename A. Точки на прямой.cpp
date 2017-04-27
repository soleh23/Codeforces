#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
__int64 r,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
__int64 comb(__int64 x)
{
    __int64 t=x;
    x--;

    if (t%2==0)t/=2;
    else x/=2;

    return t*x;
}
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

     scanf ("%I64d%I64d",&n,&k);

      for (i=1;i<=n;i++)
       scanf ("%I64d",&a[i]);

       for (i=1;i<=n;i++)
         {
            l=1;
            r=n;

            while (l<r)
             {
                m = (l+r)/2;
                if (a[m]-a[i]<k)l=m+1;
                else r=m;
             }

             if (a[r]-a[i]>k)r--;

            c+=comb(r-i);

         }
printf ("%I64d",c);

return 0;
}
