#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int st=0,xs,ys,xf,yf,ans,n,m,i,j,l,v=0,c=0,u=0,z=0,a[1000001],b[1000001],f[1000001];
queue<int>q,q2;
char k;
vector< vector<char> >g;
pair<int,int>p[1001][1001],p2[1000001];
bool used[1001][1001];
main()
{
    freopen ("dfsongrid.in","r",stdin);
    freopen ("dfsongrid.out","w",stdout);

   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);

  scanf ("%d%d%d%d%d%d",&m,&n,&ys,&xs,&yf,&xf);

   g.resize(n+1);

  for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            cin>>k;
            g[i].push_back(k);
        }
    }

q.push(xs-1);
q2.push(ys-1);
used[xs-1][ys-1]=true;
p[xs-1][ys-1] = make_pair(-1, -1);
 v=0;
 u=0;

    while (!q.empty() && !q2.empty())
     {
         v=q.front();
         u=q2.front();

         q.pop();
         q2.pop();

        if (v+1<n && g[v+1][u]!='*' && !used[v+1][u])
         {
             q.push(v+1);
             q2.push(u);
             used[v+1][u]=true;
             p[v+1][u]=make_pair(v, u);
         }
        if (v-1>=0 && g[v-1][u]!='*' && !used[v-1][u])
         {
             q.push(v-1);
             q2.push(u);
             used[v-1][u]=true;
             p[v-1][u]=make_pair(v, u);
         }
        if (u+1<m && g[v][u+1]!='*' && !used[v][u+1])
         {
             q.push(v);
             q2.push(u+1);
             used[v][u+1]=true;
             p[v][u+1]=make_pair(v, u);
         }
        if (u-1>=0 && g[v][u-1]!='*' && !used[v][u-1])
         {
             q.push(v);
             q2.push(u-1);
             used[v][u-1]=true;
             p[v][u-1]=make_pair(v, u);
         }

     }
     c=xf-1;
     z=yf-1;
if (!used[c][z]){printf ("NO");return 0;}
printf ("YES\n");
int A,B;
A = p[c][z].first;
B = p[c][z].second;
c = A;
z = B;
do{
    p2[st].first=z+1;
    p2[st].second=c+1;
    st++;
    g[c][z] = '+';
    A = p[c][z].first;
    B = p[c][z].second;
    c = A;
    z = B;
}while(c != -1);

for (i=st-1;i>=0;i--)
 printf ("%d %d ",p2[i].first,p2[i].second);
  printf ("%d %d",yf,xf);
return 0;
}
