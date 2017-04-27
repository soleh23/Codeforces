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

 scanf ("%d",&n);

  if (n==1){printf ("1");return 0;}

  for (i=1;i<=n-2;i++)
   c+=(n-i)+((n-i-1)*i);

   printf ("%d",c+n);



return 0;
}
