#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
__int64 max1=-INF,a[1000001],c=0,v=0,i,j,k,n,m,l,r,b[1000001],d[1000001],f[1000006];
__int64 fi(__int64 x)
 {
     if (x==0)return 1;
     else if (x%2==1)return fi((x-1)/2)+1;
     else return fi(x/2);
 }
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

      scanf ("%I64d",&n);

      for (i=1;i<=n;i++)
       {
          scanf ("%I64d",&a[i]);
          b[fi(a[i])]++;
       }

       for (i=1;i<=1000000;i++)
        {
            if (b[i]>0)c+=(b[i]*(b[i]-1))/2;
        }

        printf ("%I64d",c);





return 0;
}
