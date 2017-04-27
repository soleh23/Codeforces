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

      for (i=1;i<=n;i++)
       scanf ("%d",&a[i]);

          for (i=2;i<=n;i++)
           {
              if (a[i-1]>a[i])
               {
                  c=a[i-1]-a[i];

                  c/=m;

                  c++;

                  a[i]+=c*m;

                  u+=c;
               }
               else if (a[i-1]==a[i])
                {
                    u++;
                    a[i]+=m;
                }
           }
           printf ("%d",u);

return 0;
}
