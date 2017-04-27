#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

 scanf ("%d%d",&n,&k);

  for (i=1;i<=n;i++)
   {
     scanf ("%d",&r);
     while (r>0)
      {
         l=r%10;
        if (l==4 || l==7)c++;
        r/=10;
      }
      if (c<=k)u++;
      c=0;
   }

   printf ("%d",u);

return 0;
}
