#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int n,m,i=1,j,k,l=0,a[1000001],c=0,r,p,ans[1000001];
vector<int>v;
main()
{
  scanf ("%d%d",&n,&m);

   for (i=0;i<=n;i++)
    {
        for (j=0;j<=m;j++)
         if ((i*i)+j==n && (j*j)+i==m)c++;
    }
    printf ("%d",c);


return 0;
}
