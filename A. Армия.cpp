#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[100001];
using namespace std;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

  for (i=1;i<n;i++)
   scanf ("%d",&a[i]);

   scanf ("%d%d",&k,&l);

    for (i=k;i<l;i++)
     c+=a[i];

     printf ("%d",c);



return 0;
}
