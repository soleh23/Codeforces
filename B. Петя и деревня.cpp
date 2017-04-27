#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int f[100001],a[10001],x,i,j,k,l,n,m,t=-1231231,c=0,v=1;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);

 for (i=1;i<=n;i++)
  scanf("%d",&a[i]);
   
    f[1]=1;
    
   if (n==1){printf ("1");return 0;}
   
   for (i=2;i<=n;i++)
    {
       if (a[i]>=a[i-1])f[i]=f[i-1]+1;
       else f[i]=1;
    }
    for (i=n-1;i>=1;i--)
     {
       if (a[i]>a[i+1])f[i]=f[i]+f[i+1];
       else if (a[i]==a[i+1])f[i]=f[i+1];
     }
    for (i=1;i<=n;i++)
    if (f[i]>t)t=f[i];
     
     printf ("%d",t);
      
//system ("pause");
return 0; 
}
