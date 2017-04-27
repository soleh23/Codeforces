#include<stdio.h>
#include<math.h>
#include <string.h>
#include<algorithm>
#include<iostream>
using namespace std;
const int INF=-1000000000;
__int64 n,m,a[100001],b[100001],i,j,c=0,v=0,l,r,p;
pair <__int64,__int64>f[100001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%I64d",&n);
 for (i=1;i<=n;i++)
  {
  scanf ("%I64d",&f[i].first);
  f[i].second=i;
  }
   scanf ("%I64d",&m);
    for (i=1;i<=m;i++)
     scanf ("%I64d",&b[i]);
     
     sort (f+1,f+n+1);

  for (i=1;i<=m;i++)
        {
          l=0;
          r=n+1;
          while (l<r)
           {
             p=(l+r)/2;
             if (p<f[b[i]].first)l=p+1;
             else r=p;
           }
           c+=f[r].second;
           v+=n-f[r].second+1;
        }
        
        printf("%I64d %I64d",c,v); 
      
      
 //system ("pause");
return 0;
}
