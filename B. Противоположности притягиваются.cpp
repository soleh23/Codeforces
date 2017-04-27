#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
__int64 n,m=10,i,j=1,k=0,a[1000001],b[1000001],d[1000010],l=0;
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
scanf ("%I64d",&n);

 for (i=1;i<=n;i++)
  {
    cin>>a[i];
    if (a[i]>0)b[a[i]]++;
    if (a[i]<0)d[(-1)*a[i]]++;
    if (a[i]==0)l++;
    
  }

while (m>0)
 {
   if (b[m]>0 && d[m]>0)k+=b[m]*d[m];
   m--;
 }

m=1;



printf ("%I64d",k+((l*(l-1))/2));
  
//getchar ();
//getchar ();
return 0;
}
