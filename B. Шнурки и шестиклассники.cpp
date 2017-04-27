#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int n,m,a[100001],b[100001],i,j,k[101][101],l,c=0,v=0;
pair<int,int>f[100001];
main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
 for (i=1;i<=m;i++)
  {
      scanf("%d%d",&a[i],&b[i]);
      k[a[i]][b[i]]=1;
      k[b[i]][a[i]]=1;
  }


return 0;
}
