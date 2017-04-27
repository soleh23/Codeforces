#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int a[10001],b[10001],c=0,i,j,v=0,k,p=1,n;
scanf ("%d",&n);

for (i=1;i<=n;i++)
scanf ("%d",&a[i]);

for (i=1;i<=n;i++)
{
 b[a[a[i]]]=a[i];
}
      for (i=1;i<=n;i++)
      {
      printf ("%d ",b[i]);
      }

return 0;
}
