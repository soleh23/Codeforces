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
int s,t,n,m=0,i,j,v=0,k,l=0,a[1000001],c=0,r,p,used[1000001];
main()
{
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
  scanf ("%d%d%d",&n,&s,&t);

   for (i=1;i<=n;i++)
    scanf ("%d",&a[i]);

    c=a[s];
    if (s==t){printf ("0");return 0;}
    while (used[c]!=2)
     {
         v++;
     used[c]++;
     if (c==t){printf("%d",v);return 0;}
         c=a[c];

      }
  printf ("-1");



return 0;
}
