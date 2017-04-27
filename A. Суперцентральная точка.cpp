#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=-1000000000;
int f[10001],r[10010],a[10001],m,n,i,k,c=0,v,p=0,b[100001],j,a1=0,a2=0,a3=0,a4=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
 scanf ("%d",&n);

 for (i=1;i<=n;i++)
  scanf ("%d%d",&a[i],&b[i]);

   for (i=1;i<=n;i++)
    {
             a1=0;
             a2=0;
             a3=0;
             a4=0;
        for (j=1;j<=n;j++)
        {
             if (a[j]>a[i] && b[j]==b[i])a1=1;
             if (a[j]<a[i] && b[j]==b[i])a2=1;
             if (a[j]==a[i] && b[j]<b[i])a3=1;
             if (a[j]==a[i] && b[j]>b[i])a4=1;

         }
        // printf ("%d %d %d %d\n",a1,a2,a3,a4);
         if (a1>0 && a2>0 && a3>0 && a4>0)c++;
    }
    printf ("%d",c);


return 0;
}
