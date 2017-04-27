#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=-1000000000;
int f[10001],r[10010],a[10001],m,n,i,k,c=0,v,p=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
 scanf ("%d%d%d",&n,&m,&k);

  for (i=1;i<=n;i++)
   if (i-1>=m && n-i<=k)c++;

   printf ("%d",c);
return 0;
}
