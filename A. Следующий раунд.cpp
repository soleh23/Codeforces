#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int m,n,a[1001],i,c=0,v=0;
main()
{
      scanf ("%d %d",&n,&m);
       
       for (i=1;i<=n;i++) 
        scanf ("%d",&a[i]);
         
         int k=1;
       
         for (i=1;i<=m;i++)
         {
            if (a[i]>0)v++;
         }
         
            if (a[m]==a[m+1] && a[m]>0)
            {
               while (a[m]==a[m+k])
               {
               k++;
               }
            }
       
         printf("%d",v+k-1);
   
return 0;           
}         
