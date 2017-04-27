#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<queue>

 int m,n,i,j,k,l,c=0,v=0,u=0,r,a[1005][1005],b[1005],d[1005];
 char s[5];

using namespace std;
main()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

 scanf ("%d%d%d",&n,&m,&k);

  for (i=1;i<=n;i++)
  {
   for (j=1;j<=m;j++)
   {
      d[j]=j;
    scanf ("%d",&a[i][j]);
   }
   b[i]=i;
  }


    for (i=1;i<=k;i++)
     {
        scanf ("%s%d%d",s,&l,&r);

        if (s[0]=='c') swap(d[l],d[r]);
         else if (s[0]=='r') swap(b[l],b[r]);

          else printf ("%d\n",a[b[l]][d[r]]);
     }

return 0;
}
