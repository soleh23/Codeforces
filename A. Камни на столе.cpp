#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

  scanf ("%d%s",&n,s);

  for (i=1;i<n;i++)
   if (s[i]==s[i-1])c++;

   printf ("%d",c);


return 0;
}
