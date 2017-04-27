#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
int n,m,i,j=1,k=0,a[1000001],b[1000001];
double l;
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);
 
 cin>>n>>m;
  
  for (i=1;i<=n;i++)
   {
   cin>>a[i]>>b[i];
  if (i>1) l+=sqrt((a[i]-a[i-1])*(a[i]-a[i-1])+(b[i]-b[i-1])*(b[i]-b[i-1]));
   }
   l=l*m;
  printf ("%.9lf",l/50);


  
getchar ();
getchar ();
return 0;
}
