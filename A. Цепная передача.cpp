#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stack>
#include<string.h>
int l=0,m,b[1000001],a[1000001],i,j,k,c=-123123,v=0,n,f[1000001];
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
scanf("%d",&n);
 for (i=1;i<=n;i++) 
      scanf ("%d",&a[i]);                  
  
  scanf ("%d",&m);
  for (i=1;i<=m;i++)
    scanf ("%d",&b[i]);
    
    for (i=1;i<=n;i++)
     {
        for (j=1;j<=m;j++)
           { 
             if (b[j]%a[i]==0)f[v]=b[j]/a[i],v++;
           }
     }
  
  for (i=0;i<v;i++)
     if (f[i]>c)c=f[i];
  
  for (i=0;i<v;i++)
  if (f[i]==c)l++;
  
  printf ("%d",l);
//system ("pause");

return 0;
}
