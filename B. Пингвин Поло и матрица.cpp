#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
using namespace std;
const int INF=1000000000;
int z,n,m,i,j,k,l,r=INF,c=0,v=0,u=0;
vector<int>g,g2;
main()
{

       scanf ("%d%d%d",&n,&m,&k);

        for (i=1;i<=n;i++)
        {
         for (j=1;j<=m;j++)
         {
          scanf("%d",&l);
          g.push_back(l);
         }
         }

         sort (g.begin(),g.end());

         for (i=0;i<g.size();i++)
          {
             for (j=0;j<g.size();j++)
              {
                int gh=abs(g[i]-g[j]);

                 if (gh%k==0)v+=gh;
              else {u=1;break;}
              }
                     if (r>v && u==0)r=v;

                      v=0;
                      u=0;
          }

          if (r==INF){printf ("-1");return 0;}
          printf ("%d",r/k);

return 0;
}
