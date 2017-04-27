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
int kol=-INF,n,m,i,j,l,r,c=0,v=0,u=0,a[1000001],b[1000001],d[1000001],max1=-INF,k[1000001];
char s[1000001],s2[1000001];
vector<int>g,g2;
pair<int,int>p[1000001],p2[1000001];
main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

   scanf ("%d",&n);

    for (i=1;i<=n;i++)
     scanf ("%d",&a[i]);

     b[1]=a[1];

     for (i=2;i<=n;i++)
      b[i]=b[i-1]+a[i];

      for (i=1;i<n;i++)
       if (b[i]*2==b[i+1])c++;

       printf ("%d",c);



return 0;
}
