#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
__int64 n,m,k,c=0,v=0;
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  
scanf ("%I64d %I64d %I64d",&n,&m,&k);
 if (k*k>=n*m){printf ("1");return 0;}
  
  c=((n-k)/k);
   if ((n-k)%k>0)c++;
  v=(m/k);
   if (m%k>0)v++;
   c++;
   printf ("%I64d",c*v);   
     return 0;
}
