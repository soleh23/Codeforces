#include<iostream>
#include<math.h>
#include<stdio.h>
int a[1000001],n,m,i,j=1,k=0,l=0;
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 
 
 cin>>n>>m;
  
  for (i=1;i<=n;i++)
     a[i]=i;
     
  
  
  while (m>=a[j])
   {
      m=m-a[j];
      j++;
      if (j>n)j=1;
   }
   
   cout<<m;
  
//getchar ();
//getchar ();
return 0;
}
