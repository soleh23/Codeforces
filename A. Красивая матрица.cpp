#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

  for (i=1;i<=5;i++)
   for (j=1;j<=5;j++)
    {
    scanf ("%d",&n);
    if (n==1)c=i,v=j;
    }

    printf ("%d",abs(c-3)+abs(v-3));
return 0;
}
