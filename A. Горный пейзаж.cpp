#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int max1=-1233,j,i,n,m,k,c=0,v=1,a[1000001],b[1000001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
   scanf ("%d%d",&n,&k);
    
    m=(2*n)+1;
    
    for (i=1;i<=m;i++) 
     {
     scanf ("%d",&a[i]);
     }
      
  for (i=1;i<=m;i++)
   {
      if (c<k && i%2==0 && a[i]>0 && a[i]-1>a[i+1] && a[i]-1>a[i-1])a[i]--,c++;
   }
   for (i=1;i<=m;i++)
    printf ("%d ",a[i]);
 
 //system ("pause"); 
 return 0;
}
