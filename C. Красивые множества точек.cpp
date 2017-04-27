#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001];
bool used[1000001];
main()
{

 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

  scanf ("%d%d",&n,&m);
  printf ("%d\n",min(n,m)+1);

  while (m!=-1 && c!=n+1)
  {
     printf ("%d %d\n",c,m);
     m--;
     c++;
  }


return 0;
}
