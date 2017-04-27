#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,a[101][101],b[100001],f[1000001];
char s[10001];
bool used[101][101];
void dfs (int x,int y)
 {
     used[x][y]=true;
     printf ("%d %d\n",x,y);

     if (x==1 && y==2){used[x][y]=false;printf ("\n");return;}

      if (!used[x-1][y] && x-1>0)dfs(x-1,y);
      if (!used[x][y+1] && y+1<6)dfs(x,y+1);
      if (!used[x][y-1] && y-1>0)dfs(x,y-1);
      if (!used[x+1][y] && x+1<6)dfs(x+1,y);
 }
using namespace std;
main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);

 dfs (1,1);

return 0;
}
