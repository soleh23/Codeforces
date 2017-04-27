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
int z,n,m,i,j=0,k,l,max1=-INF,min1=INF,a[10000001];
bool used[1000001];

   void  dfs (int x)
    {
    int i;
    if (x==l){j=1;}
       used[x]=true;

        for (i=1;i<=n;i++)
         {
            if (!used[i] && a[i]==x)dfs(i);
         }
    }

main()
{
 //freopen ("ancestor.in","r",stdin);
 //freopen ("ancestor.out","w",stdout);

 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);

   scanf ("%d",&n);

    for (i=1;i<=n;i++)
     scanf ("%d",&a[i]);

     scanf ("%d",&m);

     for (i=1;i<=m;i++)
      {
          scanf ("%d%d",&k,&l);

           for (z=1;z<=n;z++)
           used[z]=false;

           dfs (k);

          printf ("%d\n",j);
       j=0;
      }




return 0;
}
