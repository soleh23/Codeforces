#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
int max1=-1,max2=-1,n,c=0,v=0,i,j,k,l,a[10001],b[10001];
 cin >> n;
  
  for (i=1;i<=n;i++)
   {
     cin >> a[i];
     if (max1<a[i])max1=a[i];
     b[a[i]]++;
   }
    
    for (i=1;i<=max1;i++)
    {
      if (b[i]>0)n=n+1-b[i]; 
      if (max2<b[i])max2=b[i];
    }
    cout<<max2<<" "<<n;

return 0;
}
