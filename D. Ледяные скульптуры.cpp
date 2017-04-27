#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int j,i,n,m,k=-99999999,c=0,v=1,a[1000001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  
   scanf ("%d",&n);
    
   for (i=1;i<=n;i++) 
    {scanf ("%d",&a[i]);}
     
     for (i=1;i<=n;i++)
      {
        for (j=v;j<=n;j+=v)
         {
           c+=a[j];
         }
         if (c>k)k=c;
        c=0;
        v++;
      }
    printf ("%d",k);
      

 //system ("pause"); 
 return 0;
}
