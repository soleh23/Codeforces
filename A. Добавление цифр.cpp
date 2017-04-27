#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l,c=1,v=0,u=INF,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

 scanf ("%d%d%d",&n,&m,&k);

   for (i=0;i<=9;i++)
    {
        if (((n*10)+i)%m==0)
         {
             printf ("%d",(((n*10))+i));
             for (j=1;j<k;j++)
             printf ("0");
            return 0;
         }
    }
    printf("-1");



return 0;
}
