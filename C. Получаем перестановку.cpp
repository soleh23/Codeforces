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
__int64 s,t,n,m=0,i,j,v=0,k,l=0,a[1000001],c=0,r,p,used[1000001];
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

  scanf ("%I64d",&n);

   for (i=1;i<=n;i++)
   {
    scanf ("%I64d",&a[i]);
   }

   sort (a+1,a+n+1);

    for (i=1;i<=n;i++)
      {
        c+=abs(a[i]-i);
      }
      printf ("%I64d",c);



return 0;
}
