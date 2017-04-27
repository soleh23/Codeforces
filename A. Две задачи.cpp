#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int b[1000001],a[1000001],x,i,j,k,l,n,m,t,c=0,v=0,dm,dn;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d%d%d%d%d",&x,&t,&n,&m,&dn,&dm);
if (x==0){printf ("YES");return 0;}
 
  a[0]=n;
  b[0]=m;
  for (i=1;i<t;i++)
   {
     a[i]=n-dn;
     b[i]=m-dm;
     n-=dn;
     m-=dm;
   }
   
   for (i=1;i<=t;i++)
   if (a[i]<0)a[i]=0;
   
   a[t]=0;
   
   for (i=1;i<=t;i++)
   if (b[i]<0)b[i]=0;
 
   a[t]=0;
 
    for (i=0;i<=t;i++)
     {
        for (j=0;j<=t;j++)
         {
            if (a[i]+b[j]==x){printf ("YES");return 0;}
         }
     
     }
 printf ("NO");
//  system ("pause");
return 0; 
}
