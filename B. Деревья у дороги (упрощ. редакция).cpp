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

 scanf ("%d",&n);

  for (i=1;i<=n;i++)
   scanf ("%d",&a[i]);

    c+=a[1]+1;

    for (i=2;i<=n;i++)
     {
         if (a[i]==a[i-1])c+=2;
         else c+=abs(a[i-1]-a[i])+2;
     }

     printf ("%d",c);



return 0;
}
