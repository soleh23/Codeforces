#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int n, k, l, c, d, p, nl, np;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf ("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

 printf ("%d",min(min((k*l)/nl,(c*d)),p/np)/n);
return 0;
}
