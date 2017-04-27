#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<map>
#include<vector>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
__int64 n=1,m,i,j,l,r,c=0,v=0,u=0,a[1000001],b[1000001],d[1000001];
char s[1000001],s2[1000001];
vector<int>g,g2;
pair<int,int>p[1000001],p2[1000001];
__int64 pow1 (__int64 x,__int64 y)
 {
     if (y==0)return 1;
     else if (y%2==1)
      {
          return pow1(x,y-1)*x;
      }
      else
       {
           int gh=pow1(x,y/2);
           return gh*gh;
       }
 }
main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

      cin>>s;

    for (i=1;i<strlen (s);i++)
     {
         n*=2;
         n+=s[i]-48;
     }
/*
while (n>0)
   {
     l=0;
     r=23;

      c++;
      while (l<r)
      {
          m=(l+r)/2;
          if (pow1(2,m)<n)l=m+1;
          else r=m;
      }

      if (abs(pow1(2,r-1)-n)<abs(pow1(2,r)-n))r--;
     n=abs(n-pow1(2,r));
   }*/
   printf ("%I64d",n);

return 0;
}
