#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=-1000000000;
int y,x,i,j,k=1,l,n,m,t,c=1,v=1,r;
pair <int ,int >a[100001],b[100001],d[100001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf("%d%d%d%d",&n,&m,&x,&y);
   for (i=1;i<=n;i++)
    {
    scanf ("%d",&a[i].first);
    a[i].second=i;
    }
   for (i=1;i<=m;i++)
    {
    scanf ("%d",&b[i].first);
    b[i].second=i;
    }
    sort (a+1,a+n+1);
    sort (b+1,b+m+1);
    
   b[0].first=INF;
    
     for (i=1;i<=n;i++)
      {
          l=0;
          r=m;      
              while (l<r)
               {
                 t=(l+r)/2;
                 if (b[t].first<a[i].first-x)l=t+1;
                 else r=t;
               }
               if (b[r].first>=a[i].first-x && b[r].first<=a[i].first+y)
               {
                   // printf ("%d %d\n",i,r);
              
                d[k].first=a[i].second;
                d[k].second=b[r].second;
                k++;
                b[r].first=INF;
                
               }
      }
      printf ("%d\n",k-1);
     for (i=1;i<k;i++)
        printf ("%d %d\n",d[i].first,d[i].second);
//system ("pause");
return 0; 
}
