#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
const int INF=1000000000;
__int64 n,m,i,j,k,l,c=0,v=0,u=0,a[101][101],b[100001],f[1000001];
char s[10001];
using namespace std;
main()
{
 freopen ("knight.in","r",stdin);
 freopen ("knight.out","w",stdout);

  scanf ("%I64d%I64d",&n,&m);

   a[1][1]=1;
   for (i=2;i<=n;i++)
    {
       for (j=2;j<=m;j++)
        {
           a[i][j]=a[i-2][j-1]+a[i-1][j-2];
        }
    }
    printf ("%I64d",a[n][m]);



return 0;
}
