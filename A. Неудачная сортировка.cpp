#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int n,m,i,j,k,l=0,a[1000001],c=0,r,p,ans[1000001];
vector<int>v;
main()
{
  scanf ("%d",&n);
 if (n<=2){printf ("-1");return 0;}
 /*  for (i=1;i<=n;i++)
    scanf ("%d",&a[i]);
 for (i=1;i<=n-1;i++)
  for (j=i;j<=n-1;j++)
   if (a[j]>a[j+1])swap(a[j],a[j+1]);
*/
   for (i=n;i>=1;i--)
    printf ("%d ",i);
return 0;
}
