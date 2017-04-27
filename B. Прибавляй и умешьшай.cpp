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

   for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
       c+=a[i];
    }
    if (c%n==0)printf ("%d",n);
    else printf ("%d",n-1);


return 0;
}
