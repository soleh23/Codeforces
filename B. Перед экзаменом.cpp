#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int t,r,n,m,i,j,k,l,c=0,v=0,u=0,z2[10][10],z[10][10],a[1000001],b[10][10][101],f[100001];
vector< vector<int> >g;
vector<int>h,h2;
char s[1000001],s2[1000001];
pair<int,int>p[1001];
queue<int>q;
main()
{
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);

   scanf ("%d%d",&n,&m);

    a[0]=0;

    for (i=1;i<=n;i++)
    {
     scanf ("%d%d",&p[i].first,&p[i].second);
     b[p[i].first][p[i].second][z[p[i].first][p[i].second]]=i;
     z[p[i].first][p[i].second]++;
     c+=p[i].first;
     v+=p[i].second;
    }

     if (c<=m && m<=v)
        {
            printf ("YES\n");

             sort (p+1,p+n+1);
             reverse (p+1,p+n+1);

             for (i=1;i<=n;i++)
              a[i]=a[i-1]+p[i].first;

              for (i=1;i<=n;i++)
               {
                 c=m-(a[n]-a[i]);
                 if (p[i].second>=c)
                  {
                    m-=c;
                    f[b[p[i].first][p[i].second][z2[p[i].first][p[i].second]]]=c;
                    z2[p[i].first][p[i].second]++;
                  }
                  else
                   {
                    m-=p[i].second;
                    f[b[p[i].first][p[i].second][z2[p[i].first][p[i].second]]]=p[i].second;
                    z2[p[i].first][p[i].second]++;
                   }
               }

               for (i=1;i<=n;i++)
                printf ("%d ",f[i]);
        }

      else printf ("NO");

return 0;
}
