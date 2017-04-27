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
__int64 kol=-INF,n,m,i,j,l,r,c=0,v=0,u=0,a[1000001],b[1000001],d[1000001],max1=-INF,k[1000001];
char s[1000001],s2[1000001];
vector<int>g,g2;
pair<int,int>p[1000001],p2[1000001];
main()
{
   // freopen ("input.txt","r",stdin);
   // freopen ("output.txt","w",stdout);

    scanf ("%I64d%I64d",&n,&m);

     for (i=1;i<=n;i++)
     {
      scanf ("%I64d",&a[i]);
      p2[i].second=i;
     }
      for (i=1;i<=m;i++)
       scanf ("%I64d%I64d",&p[i].first,&p[i].second);

      sort (a+1,a+n+1);

      for(i=1;i<=m;i++)
       {
         d[p[i].first]++;
         d[p[i].second+1]--;
       }

  p2[1].first=d[1];

 for (i=2;i<=n;i++)
 {
     p2[i].first=p2[i-1].first+d[i];
 }

 sort (p2+1,p2+n+1);

   for (i=1;i<=n;i++)
   {
       b[p2[i].second]=a[i];
   }

  k[1]=b[1];

   for (i=2;i<=n;i++)
    k[i]=k[i-1]+b[i];

   for (i=1;i<=m;i++)
    {
        u+=k[p[i].second]-k[p[i].first-1];
    }
    printf ("%I64d",u);



return 0;
}
