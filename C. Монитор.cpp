#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
__int64 r,x,y,n,m,i,j,k,l=0,c=0,v=1,a[1000001],b[1000001];
__int64 gcd(__int64 a,__int64 b)
{
   if (a!=0)return gcd(b%a,a);
    else return b;
}
main()
{
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);

  scanf ("%I64d%I64d%I64d%I64d",&n,&m,&x,&y);

   c=gcd(x,y);
   x/=c;y/=c;

    r=min(n/x,m/y);

     while (l<r)
      {
          k=(l+r)/2;
           if(k*x<n && k*y<m)l=k+1;
           else r=k;
      }

      if (r*x>n || r*y>m)r--;
      printf ("%I64d %I64d",r*x,r*y);



return 0;
}
