#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<stack>
using namespace std;
const int INF=1000000000;
int d[1000001],u=1,z,n,m,c=1,i,j=0,k,l,b[1000001],max1=-INF,min1=INF,a[10000001],h[101][101];
vector <int>g;
bool used[1000001];
void dfs (int x)
 {
     int i;
     used[x]=true;
      for (i=1;i<=n;i++)
       {
           if (!used[i] && h[x][i]==1)b[i]=c,c++,dfs(i);
       }
  c--;
 }
main()
{
 freopen ("rootdist.in","r",stdin);
 freopen ("rootdist.out","w",stdout);

 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   for (i=1;i<n;i++)
    {
       scanf ("%d",&a[i]);
        h[a[i]][i+1]=1;
    }
  dfs(1);

   for (i=1;i<=n;i++)
    if (max1<b[i])max1=b[i];

    for (i=1;i<=n;i++)
     if (b[i]==max1)g.push_back(i);

     printf ("%d\n%d\n",max1,g.size());

      for (i=0;i<g.size();i++)
       printf("%d ",g[i]);



return 0;
}
