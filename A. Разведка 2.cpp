#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<queue>
const int INF=1000000000;
 int m,n,i,j,k,l,c=0,v=0,u=INF,r,a[1000001],b[1000001];
using namespace std;
main()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

 scanf ("%d",&n);

  for (i=1;i<=n;i++)

   scanf ("%d",&a[i]);

    for (i=2;i<=n;i++)
      {
         if (abs(a[i]-a[i-1])<u){u=abs(a[i]-a[i-1]);l=i,r=i-1;}
      }
      if (abs(a[1]-a[n])<u)printf ("%d 1",n);
      else printf ("%d %d",r,l);

return 0;
}
