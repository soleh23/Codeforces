#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int INF=100000000;
int z=0,r=0,n,m,a[10001],w=-1,c=0,v=0,i=1,j,k=0,l=0,min_l=9999999;
pair <int,int>f[1001];
char s[1001];
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
scanf ("%d%s",&n,&s);
 //j=(n/2)+1;
 for (i=0;i<n;i++)
  {
           f[i].first=i;       
    if (s[i]=='R')f[i].second=1;
    else f[i].second=0;
  }
 
i=1;
j=(n/2)+1;
 while (c<(n/2))
  {
    c++;
    
    if (f[i-1].second==1 && f[j-1].second==0)printf ("%d %d\n",j,i);
    else printf ("%d %d\n",i,j);
  i++;
  j++;
  }

return 0; 
}
