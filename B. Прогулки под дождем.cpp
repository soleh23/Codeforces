#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int r[10001],a[1001],n,i,j,c,v,l,k,min1=99999999,b[10001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
 for (i=1;i<=n;i++)
  {
  scanf ("%d",&a[i]);
}
r[1]=a[1];
r[2]=a[2];
for (i=3;i<=n;i++)
r[i]=min(a[i],max((r[i-1]),(r[i-2])));

printf ("%d",min(r[1],min(r[n],r[1])));
//system ("pause");
return 0; 
}
