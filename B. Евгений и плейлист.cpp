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
int t,r,n,m=0,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001],d[1001][1001];
vector< vector<int> >g;
vector<int>h,h2;
char s[1000001],s2[1000001];
queue<int>q;
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

     scanf ("%d%d",&n,&m);

     a[0]=0;

     for (i=1;i<=n;i++)
      {
         scanf ("%d%d",&l,&r);
         a[i]=a[i-1]+(l*r);
      }

       for (i=1;i<=m;i++)
        {
           scanf ("%d",&v);
             l=1;
             r=n;

             while (l<r)
              {
                 k=(l+r)/2;
                 if (a[k]<v)l=k+1;
                 else r=k;
              }

              printf ("%d\n",r);

        }



return 0;
}
