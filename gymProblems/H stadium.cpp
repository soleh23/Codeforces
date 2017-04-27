#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000007;
__int64 n,m=2,i,j,k,l,r,a[1000001],b[1000001],max1=-INF;
queue<int>q;
vector<int>g;
char s[101][101],s2[101][101];
__int64 bp(__int64 x, __int64 y)
 {
     if (y==0)return 1;

     else if (y%2==1)
      {
          return ((bp(x,y-1)%INF)*(x%INF))%INF;
      }
      else
       {
           __int64 yu=bp(x,y/2);
           return ((yu%INF)*(yu%INF))%INF;
       }
 }
main()
{
   freopen ("stadium.in","r",stdin);
   freopen ("stadium.out","w",stdout);

  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

    scanf ("%I64d",&n);

      printf ("%I64d",bp(m,n-1));


return 0;
}
