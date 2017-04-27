#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l,c=0,v=0,u=INF,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

 scanf("%I64d%I64d",&n,&m);

  for (i=1;i<=n;i++)
   {
      scanf ("%I64d",&a[i]);
   }

   sort (a+1,a+1+n);

   if (m>n){printf ("-1");return 0;}

   printf ("%I64d %I64d",a[n-m+1],a[n-m+1]);

return 0;
}
