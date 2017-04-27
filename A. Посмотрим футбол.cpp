#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int z=0,n,m,i,j=0,k,l,c=0,v=0,a[100001],b[10001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf ("%d%d%d",&n,&m,&k);

 if (m>=n){printf ("0");return 0;}

  c=n*k/m;
  if ((n*k)%m!=0)c++;

  printf ("%d",c-k);

return 0;
}
