#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[100001];
using namespace std;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

    for (i=1;i<=n;i++)
     {
        scanf ("%d",&a[i]);
        b[a[i]]++;
        if (a[i]>v)v=a[i];
     }

   for (i=1;i<=v;i++)
    {
       if (b[i]>=4)
         {
             c+=b[i]/4;
            b[i]-=((b[i]/4)*4);
         }
    }

    for (i=1;i<=v;i++)
     if (b[i]>1)u++;

     c+=u/2;

     printf ("%d",c);



return 0;
}
