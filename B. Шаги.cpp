#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
int r,xc,xy,n,m,i,j,k,l,c=0,a,b;
__int64 v=0;
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
scanf("%d%d%d%d%d",&n,&m,&xc,&xy,&k);
 for (i=1;i<=k;i++)
 {
  scanf ("%d%d",&a,&b);
     l=1;
     r=max(n,m);
      while (l<r)
       {
        j=(l+r)/2;
           if ((j*a)+xc<n && (j*b)+xy<m && (j*a)+xc>=1 && (j*b)+xy>=1)l=j;
           else r=j-1;
       }
       if (r*a+xc>n ||  r*b+xy>m || r*b+xy<1 || r*a+xc<1)r--;
       xc+=r*a;
       xy+=r*b;
       v+=r;
  }
  printf ("%I64d",v);

return 0;
}
