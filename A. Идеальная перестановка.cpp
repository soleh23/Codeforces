#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#define sc scanf
#define pr printf
#define fr first
#define sec second
using namespace std;
const int INF=1000000000;
int b,a,m,n,i,j=0,k,c=1,v,p=123;
pair <int,int>f[1001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
if (n%2==1){printf ("-1");return 0;}
for (i=1;i<=n;i+=2)
 {
   a=i;
   b=i+1;
   printf ("%d %d ",b,a);
 }
//system ("pause");
return 0; 
}
