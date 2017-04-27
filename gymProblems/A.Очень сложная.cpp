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
main()
{
   freopen ("veryhard.in","r",stdin);
   freopen ("veryhard.out","w",stdout);

 scanf ("%I64d",&n);

  for (i=1;i<=n;i++)
   {
      scanf ("%I64d",&k);
      l=sqrt(k);
      if (l*l==k)printf ("1 ");
      else printf ("0 ");
   }

return 0;
}
