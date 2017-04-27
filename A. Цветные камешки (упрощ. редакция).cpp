#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
char s[101],s2[101];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

  cin>>s>>s2;

  l=strlen (s);
  k=strlen (s2);

   while (c<k)
   {
      if (s[v]==s2[c])v++,c++;
      else c++;
   }

   printf ("%d",v+1);

return 0;
}
