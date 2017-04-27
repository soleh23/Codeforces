#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
const int INF=1000000000;
int n,m=0,i,j,v=0,k,l=0,a[1000001],c=0,r,p;
main()
{
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
  scanf ("%d%d",&n,&k);

  for (i=1;i<=k;i++)
   {
      printf ("%d ",n);
      n--;
   }
   for (i=1;i<=n;i++)
    printf ("%d ",i);

return 0;
}
