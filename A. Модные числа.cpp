#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int a[1000001],n,i,j,c,v,l,r,k;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
for (i=1;(i*(i+1))/2<=n;i++)
 {
 a[i]=(i*(i+1))/2;
 c++;
 }
 r=c;
 v=1;
 l=0;
 int m;
 
while (v<=c) 
 {
    k=n-a[v];  
    l=0; r=c;
 while (l<r)
  {
  m=(l+r)/2;
  if (a[m]<k)l=m+1;
  else r=m;
  }
  if (a[r]==k && a[r]!=0){printf ("YES");return 0;}
 v++;
}
printf ("NO");
//system ("pause");
return 0; 
}
