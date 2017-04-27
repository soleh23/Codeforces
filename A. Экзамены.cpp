#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int m,n,i,j,k,l,c=0,v=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
if ( m/n>=3)printf ("0");
else printf ("%d",n-(m%n));
//system ("pause");
return 0; 
}
