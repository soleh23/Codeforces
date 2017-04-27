#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int r,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
main()
{
  // freopen ("cows.in","r",stdin);
  // freopen ("cows.out","w",stdout);

   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

    scanf ("%d%d",&n,&m);

     for (i=1;i<=n;i++)
      scanf ("%d",&a[i]);

      m--;

      printf ("%d",a[n-m+1]-a[1]);


return 0;
}
