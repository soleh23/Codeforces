#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int n,m,j,i,k,l,c=0,v=0,a1[1000001],b1[1000001];
int gcd(int x,int y)
 {
	if (y == 0)
		return x;
	else
		return gcd (y, x % y);
}
 int nok(int x,int y)
  {
    return (x*y)/gcd(x,y);
  }
main()
 {
     scanf ("%d%d%d%d",&l,&k,&n,&m);

      c=nok(l,k);


     n+=c;
     n-=(n%c);
     m+=c;
     m-=(m%c);

     printf ("%d",((m-n)/c)+1);


 return 0;
 }
