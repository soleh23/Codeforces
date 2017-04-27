#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l,c=1,v=0,u=INF,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

 scanf ("%d%d",&n,&m);

  if (n/m<3){printf ("-1");return 0;}

     u=n-m;
     r=u/m;

  for (i=1;i<=u;i++)
   {
       if (c<=m)printf("%d ",c),v++;
       if (v==r)v=0,c++;
   }

   for (i=1;i<=u%m;i++)
    printf ("%d ",m);

   for (i=1;i<=m;i++)
    printf ("%d ",i);

return 0;
}
