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

 scanf ("%d%d%s",&n,&m,s);

   for (j=1;j<=m;j++)
    {
        for (i=0;i<n-1;i++)
         {
             if (s[i]=='B' && s[i+1]=='G')swap(s[i],s[i+1]),i++;
         }
    }

    printf ("%s",s);


return 0;
}
