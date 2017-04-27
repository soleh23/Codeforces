#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
pair <int,int>d[10001];
int i,j,k,l,c=0,n,m,v=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
 for (i=1;i<=n;i++)
  scanf ("%d%d",&d[i].first,&d[i].second);
    
    for (i=1;i<=n;i++)
     {
        if (7-m==d[i].first || 7-m==d[i].second || m==d[i].first || m==d[i].second)
        {printf ("NO");return 0;}
     }
     printf ("YES");
  //system ("pause");
return 0; 
}
