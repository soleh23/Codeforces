#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
int min1=INF,max1=-INF,a[1000005],c=0,v=0,i,j,k,n,m,l,r,b[1000005],d[1000005],f[1000005];
pair<int,int>p[1000001],p2[1000001];
main()
{
   scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
     scanf ("%d%d",&p[i].first,&p[i].second);
    }
    if (n==1)
     {
        if (p[1].first>p[1].second)printf ("G");
        else printf ("A");
        return 0;
     }
    c=p[1].first;
    b[1]=1;
    for (i=2;i<=n;i++)
     {
        if (abs(c-p[i].second)<=500)b[i]=2,c-=p[i].second;
        else c+=p[i].first,b[i]=1;
     }

    v=p[1].second;
    d[1]=2;
    for (i=2;i<=n;i++)
     {
        if (abs(v-p[i].first)<=500)d[i]=1,v-=p[i].first;
        else v+=p[i].second,d[i]=2;
     }

     if (abs(c)<=500)
     {
       for (i=1;i<=n;i++)
         {
             if (b[i]==1)printf ("A");
             else printf ("G");
         }
         return 0;
     }
  else   if (abs(v)<=500)
     {
       for (i=1;i<=n;i++)
         {
             if (d[i]==1)printf ("A");
             else printf ("G");
         }
         return 0;
     }
     else printf ("-1");

return 0;
}
