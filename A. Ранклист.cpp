#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int z=0,n,m,i,j=0,k,l,c=0,v=0,a[100001],b[10001];
pair <int,int>f[101],p[101],ans[101];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
for (i=0;i<n;i++)
{
     scanf ("%d%d",&f[i].first,&f[i].second);
}

 sort (f,f+n);
  c=1;
  for (i=1;i<n;i++)
   {
        if (f[i-1].first==f[i].first)c++;
        else {a[v]=c;c=1;v++;}
   }

    a[v]=c;

  b[0]=a[v];
  for (int y=v-1,i=1;i<=v,y>=0;i++,y--)
   {
          b[i]=b[i-1]+a[y];
   }

   i=n-b[0];
   while (v>=0)
    {
       for (i=n-b[z];i<n-b[z-1];i++)
       {
        p[j].first=f[i].first;
        p[j].second=f[i].second;
        j++;
       }
       z++;
       v--;
    }

   c=1;
   v=1;
   int d=0;
  for (i=1;i<n;i++)
   {
    if (p[i-1].first!=p[i].first || p[i-1].second!=p[i].second) {ans[d].first=ans[d-1].second+1;ans[d].second=c;d++;}
   c++;
   }
    ans[d].first=ans[d-1].second+1;
    ans[d].second=n;
   for (i=0;i<=d;i++)
     {
         //printf ("%d %d\n",ans[i].first,ans[i].second);
         if (m>=ans[i].first && m<=ans[i].second)printf ("%d",ans[i].second-ans[i].first+1);
     }
return 0;
}
