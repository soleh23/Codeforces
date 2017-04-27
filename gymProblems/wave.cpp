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
int u=1,z,n,m,c=1,v,i,j=0,k,l,b[1000001],max1=-INF,min1=INF,a[10000001],h[101][101];
vector< vector<int> >g;
bool used[1000001];
queue<int>q;
pair<int,int>d[1000001];
main()
{
 freopen ("wave.in","r",stdin);
 freopen ("wave.out","w",stdout);

// freopen ("input.txt","r",stdin);
// freopen ("output.txt","w",stdout);

   scanf ("%d%d%d",&n,&m,&v);

    g.resize(n+10);

     for (i=1;i<=m;i++)
     {
      scanf ("%d%d",&a[i],&b[i]);
      g[a[i]].push_back(b[i]);
      g[b[i]].push_back(a[i]);
     }

    for (i=1;i<=n;i++)
      d[i].second=i;



     q.push(v);
     used[v]=true;
     d[v].first=0;

       while (!q.empty())
        {
            z=q.front();

            q.pop();

            for (i=0;i<g[z].size();i++)
             {
                 int to=g[z][i];
                 if (!used[to])
                  {
                      used[to]=true;
                      q.push(to);
                      d[to].first=d[z].first+1;
                  }
             }
        }

        sort(d+1,d+n+1);


      for (i=1;i<=n;i++)
       if (d[i].first!=0)c++;

       printf ("%d\n%d",c,v);

       for (i=1;i<=n;i++)
       if (d[i].first!=0)printf (" %d",d[i].second);

return 0;
}
