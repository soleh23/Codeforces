#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int z,n,m,a[100001],b[100001],i,j,l=0,c=0,v=0;
pair<int,int>f[100001],k[1000001];
bool used[100001];
main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
 for (i=1;i<=m;i++)
  {
      scanf("%d%d",&a[i],&b[i]);
      /*if(f[a[i]].first==0)f[a[i]].first=b[i];
      else f[a[i]].second=b[i];
      if(f[b[i]].first==0)f[b[i]].first=a[i];
      else f[b[i]].second=a[i];*/
  }
 find_comps();
return 0;
}
