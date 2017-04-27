#include<stdio.h>
#include<iostream>
using namespace std;
__int64 a[100001],j,n,c=0,i;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%i",&n);

for (i=1;i<=n;i++)
 scanf ("%i",&a[i]);
 
  
 for (i=1;i<=n;i++)
 {
  for (j=i+1;j<=n;j++)
  {
   if (a[i]<a[j])swap(a[i],a[j]);
  }
 }
 for (i=1;i<=n;i++)
 if (a[i]==a[i+1] || a[i]>n)c++;
 
 printf ("%d",c);
return 0;
}
