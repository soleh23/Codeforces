#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[100001],f[1000001];
char s[10001];
using namespace std;
main()
{
 freopen ("lepus.in","r",stdin);
 freopen ("lepus.out","w",stdout);

   scanf ("%d%s",&n,s);

   if (s[0]=='"')f[0]=1;

    for (i=1;i<n;i++)
     {
        f[i]=-1;

       if (s[i]!='w')
           {
             f[i]=f[i-1];
             if (i-3>=0)f[i]=max(f[i-1],f[i-3]);
             if (i-5>=0)f[i]=max(max(f[i-1],f[i-3]),f[i-5]);
             if (s[i]=='"' && f[i]!=-1)f[i]++;
           }
     }


      printf ("%d ",f[n-1]);

return 0;
}
