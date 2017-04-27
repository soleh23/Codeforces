#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int n, k, d, p, nl, np,x;
int c,l,y;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d%d",&n,&x,&y);
c=(y*n)/100;
if ((y*n)%100!=0)c++;
if (x>=c){printf ("0");return 0;}
printf ("%d",c-x);
return 0;
}
