#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int l,r,j,i,n,m,k,c=0,v=0,a[1000001];
pair<int,int>f[1000001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

   scanf ("%d",&n);

   for (i=0;i<n;i++)
    scanf ("%d%d",&f[i].first,&f[i].second);

    sort (f,f+n);

    v=f[0].second;

    for (i=1;i<n;i++)
     {
        if (f[i].second<v)c++;
        else v=f[i].second;
     }
 printf ("%d",c);

 return 0;
}
