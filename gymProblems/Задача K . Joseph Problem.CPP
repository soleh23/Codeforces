#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<vector>
using namespace std;
const int INF=1000000000;
int r=0,n,m,a[10001],c=0,v=0,i,j,k,l=0;
void joseph (int x, int y)
 {
	int res = 0;

	for (int i=1; i<=x;i++)
		    res=(res+y)%i;

printf ("%d",res+1);
}
main()
{
freopen("joseph.in","r",stdin);
freopen("joseph.out","w",stdout);
scanf ("%d%d",&n,&m);
joseph(n,m);
return 0;
}
