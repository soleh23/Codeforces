#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
const int INF=1000000000;
__int64 n,m=0,i,j,v=0,k,l=0,a[1000001],c=0,r,p;
vector<int>g;
__int64 qwe(__int64 x)
 {
       return v-((x*(x-1))/2);
 }
main()
{
 //  freopen ("input.txt","r",stdin);
 //  freopen ("output.txt","w",stdout);

    scanf("%I64d%I64d",&n,&k);
    if (n==1){printf ("0");return 0;}
       l=1;
       r=k-1;
       v=((k*(k-1))/2);
     if ((k*(k-1))/2<n-1){printf ("-1");return 0;}
      if (n<=k){printf ("1");return 0;}


     while (l<r)
      {
          m=(l+r)/2;

           if (qwe(m)>n-1)l=m+1;
           else r=m;
      }

    l=0;
       if (qwe(r)==n-1)l--;
      printf ("%I64d",k-r+1+l);
return 0;
}
