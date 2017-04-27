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
int d[1000001],u=1,z,n,m,i,j=0,k,l,b[1000001],max1=-INF,min1=INF,a[10000001],h[101][101];
vector <int>g;
bool used[1000001];
void dfs(int x)
 {
 int i;
    used[x]=true;
     for (i=1;i<=n;i++)
      {
         if (!used[i] && h[x][i]==1)j++,dfs(i);
      }
 }
main()
{
 freopen ("connect.in","r",stdin);
 freopen ("connect.out","w",stdout);

  scanf ("%d%d",&n,&m);

   for (i=1;i<=m;i++)
   {
    scanf ("%d%d",&a[i],&b[i]);
     h[a[i]][b[i]]=1;
     h[b[i]][a[i]]=1;
   }
   dfs(1);

   if (j==n-1)printf ("YES");
   else printf ("NO");




return 0;
}
