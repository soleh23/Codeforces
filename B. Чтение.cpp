#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int INF=100000000;
int z=0,r=0,n,m,a[10001],w=-1,c=0,v=0,i=1,j,k=0,l=0,min_l=9999999;
pair<int,int>f[10001];
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
scanf ("%d%d",&n,&m);
 for (i=0;i<n;i++){
  scanf ("%d",&f[i].first);
  f[i].second=i;}
   
   sort (f,f+n);
    reverse (f,f+n);
     printf ("%d\n",f[m-1].first);
     for (i=0;i<m;i++)
     {a[c]=f[i].second+1;
     c++;}
     sort (a,a+c);
     for (i=0;i<c;i++)
     printf ("%d ",a[i]);

return 0; 
}
