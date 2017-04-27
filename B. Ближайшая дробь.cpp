#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
const __int64 INF=1000000000000;
__int64 max1=-INF,gh3,min1=INF,ans1,ans2,gh,gh2,i,j,l,r,b[1000001],a[10000001];
__int64  t=0,n,m,k;
__int64 c=0,v=0,u=0;
double ghj=0;
char s[10001];
__int64 gcd (__int64 a, __int64 b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
void func (__int64 x1,__int64 y1,__int64 x2,__int64 y2)
 {
     gh=x1*y2;
     gh2=x2*y1;
      gh3=y1*y2;
 }
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);

  scanf ("%I64d%I64d%I64d",&n,&m,&k);
 __int64 df=gcd(n,m);

 n/=df;
 m/=df;
   for (i=1;i<=k;i++)
    {
        l=0;
        r=n;
        j=i;

       while (l<r)
        {
            t=(l+r)/2;
            func(n,m,t,j);
            if (gh2<gh)l=t+1;
            else r=t;
        }
        func(n,m,r-1,j);
        c=gh;
        v=gh2;
        __int64 yu=gh3;
        func(n,m,r,j);
     if (abs(c-v)<abs(gh-gh2) || abs(c-v)==abs(gh-gh2) && yu<gh3 || abs(c-v)==abs(gh-gh2) && yu==gh3)r--;

        func(n,m,r,j);
        if (i==1 || (abs(gh-gh2))*max1<min1*gh3)
         {
            max1=gh3;
             min1=abs(gh-gh2);
             ans1=r;
             ans2=j;
         }

    }

printf ("%I64d/%I64d",ans1,ans2);

return 0;
}
