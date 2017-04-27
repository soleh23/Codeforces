#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf ("%d",&n);

for (i=1;i<=n;i++)
 scanf ("%d%d",&a[i],&b[i]);

 for (i=1;i<=n;i++)
  {
      for (j=1;j<=n;j++)
       {
          if (i!=j && a[i]==b[j])c++;
       }
  }

  printf ("%d",c);


return 0;
}
