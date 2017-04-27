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

      for (i=1;i<=n;i++)
       {scanf ("%d",&a[i]);
        if (a[i]==-1)c++;
        else v++;
       }

       for (i=1;i<=m;i++)
        {
           scanf ("%d%d",&l,&r);
           u=r-l+1;
           if (u%2==0 && c>=u/2 && v>=u/2)printf ("1\n");
           else printf ("0\n");
        }




return 0;
}
