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
int p,q,st=0,xs,ys,xf,yf,ans,n,m,i,j,l,v=0,c=0,u=0,z=0,a[1000001],b[1000001],f[1000001],d[1001][1001];
queue<int>q1,q2;
char k;
vector< vector<char> >g;
pair<int,int>p1[1001][1001],p2[1000001];
bool used[1001][1001];
main()
{
    freopen ("horse.in","r",stdin);
    freopen ("horse.out","w",stdout);

 // freopen ("input.txt","r",stdin);
 // freopen ("output.txt","w",stdout);

   scanf ("%d%d%d%d%d%d%d%d",&n,&m,&p,&q,&xs,&ys,&xf,&yf);

    q1.push(xs);
    q2.push(ys);

    used[xs][ys]=true;
    p1[xs][ys]=make_pair(-1,-1);
    d[xs][ys]=0;

     while (!q1.empty())
      {
          v=q1.front();
          u=q2.front();

          q1.pop();
          q2.pop();

          if (v+p<=n && u-q>=1 && !used[v+p][u-q])
           {
               used[v+p][u-q]=true;
               q1.push(v+p);
               q2.push(u-q);
               p1[v+p][u-q]=make_pair(v,u);
               d[v+p][u-q]=d[v][u]+1;
           }
          if (v+q<=n && u-p>=1 && !used[v+q][u-p])
           {
               used[v+q][u-p]=true;
               q1.push(v+q);
               q2.push(u-p);
               p1[v+q][u-p]=make_pair(v,u);
               d[v+q][u-p]=d[v][u]+1;
           }
          if (v-p>=1 && u+q<=m && !used[v-p][u+q])
           {
               used[v-p][u+q]=true;
               q1.push(v-p);
               q2.push(u+q);
               p1[v-p][u+q]=make_pair(v,u);
               d[v-p][u+q]=d[v][u]+1;
           }
          if (v-q>=1 && u+p<=m && !used[v-q][u+p])
           {
               used[v-q][u+p]=true;
               q1.push(v-q);
               q2.push(u+p);
               p1[v-q][u+p]=make_pair(v,u);
               d[v-q][u+p]=d[v][u]+1;
           }
           if (v-p>=1 && u-q>=1 && !used[v-p][u-q])
           {
               used[v-p][u-q]=true;
               q1.push(v-p);
               q2.push(u-q);
               p1[v-p][u-q]=make_pair(v,u);
               d[v-p][u-q]=d[v][u]+1;
           }
          if (v-q>=1 && u-p>=1 && !used[v-q][u-p])
           {
               used[v-q][u-p]=true;
               q1.push(v-q);
               q2.push(u-p);
               p1[v-q][u-p]=make_pair(v,u);
               d[v-q][u-p]=d[v][u]+1;
           }
          if (v+p<=n && u+q<=m && !used[v+p][u+q])
           {
               used[v+p][u+q]=true;
               q1.push(v+p);
               q2.push(u+q);
               p1[v+p][u+q]=make_pair(v,u);
               d[v+p][u+q]=d[v][u]+1;
           }
          if (v+q<=n && u+p<=m && !used[v+q][u+p])
           {
               used[v+q][u+p]=true;
               q1.push(v+q);
               q2.push(u+p);
               p1[v+q][u+p]=make_pair(v,u);
               d[v+q][u+p]=d[v][u]+1;
           }

      }
      if (!used[xf][yf]){printf ("-1");return 0;}

      printf ("%d\n",d[xf][yf]);

      c=xf;
      z=yf;

      int A,B;

      while (c!=-1)
       {
           p2[st].first=c;
           p2[st].second=z;

             st++;

           A=c;
           B=z;

           c=p1[A][B].first;
           z=p1[A][B].second;
       }

       for (i=st-1;i>=0;i--)
        printf ("%d %d\n",p2[i].first,p2[i].second);




return 0;
}
