#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
int n,m,i=0,j,l,max1=-1,min1=99999999,a[10000001];
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

cin>>n>>m>>l;
l*=2;

  if (l<=min(n,m))printf ("First");
  else printf ("Second");


return 0;
}
