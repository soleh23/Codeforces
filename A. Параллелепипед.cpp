#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int a,b,c,i,j,x1,x2,x3,h;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d%d",&x1,&x2,&x3);
a=sqrt((x1*x2)/x3);
b=x1/a;
c=x2/a;
   printf ("%d",4*(a+b+c));
  //system ("pause");
return 0; 
}
