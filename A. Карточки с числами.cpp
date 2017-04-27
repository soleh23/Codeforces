#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int x,y,a[3000001],n,m,i,j,k,l,r,now;
pair <int,int>f[3000001];
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
scanf ("%d",&n);

 for (i=1;i<=2*n;i++)
 {
  scanf ("%d",&a[i]);
  f[i].first=a[i];
  f[i].second=i;
 }

 sort (f+1,f+(2*n)+1);

  for (i=1;i<=2*n;i+=2)
   {
     if (f[i].first!=f[i+1].first) {printf ("-1");return 0;}
   }

   for (i=1;i<=2*n;i+=2)
    printf ("%d %d\n",f[i].second,f[i+1].second);



return 0;
}
