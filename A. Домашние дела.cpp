#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
int a[100001],n,m,i,j,k,l,c=0,v=0,u=0;
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
scanf ("%d%d%d",&n,&m,&k);

 for (i=1;i<=n;i++)
  scanf ("%d",&a[i]);

   sort (a+1,a+n+1);

   printf ("%d",a[n-m+1]-a[n-m]);

return 0;
}
