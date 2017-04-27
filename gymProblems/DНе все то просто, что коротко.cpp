#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l,c=0,v=0,u=0,a[1000001];
__int64 binpow (__int64 x,__int64 y)
{
    if (y==0)return 1;
    else if (y%2==1)
     {
       return (((binpow(x,y-1))%k)*x%k)%k;
     }
     else
      {
        int b=binpow(x,y/2);
        return ((b%k)*(b%k))%k;
      }
}
main()
{
   freopen ("nosimple.in","r",stdin);
   freopen ("nosimple.out","w",stdout);

 scanf ("%I64d%I64d%I64d",&n,&m,&k);

  printf ("%I64d",binpow(n,m));


return 0;
}
