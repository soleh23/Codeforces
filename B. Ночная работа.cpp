#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int c=0,a,b,n,m,i=0,j=0,k,l,r;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d",&n,&k);
 
 l=0;r=n;
 
 
 while (l<r)
  {
    m=(l+r)/2;
        
        while (m/pow(k,c)>=1)
          {i+=m/pow(k,c);c++;}
       
     //  printf ("%d",i);
     
      if (i<n)l=m+1;
      else r=m;   
     
     i=0;
     c=0;
  }
 printf ("%d",r);
  //system ("pause");
return 0; 
}
