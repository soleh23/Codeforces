#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=10000000;
int max_ans=-INF,y=0,n,m,i,j,k,l,c=1,v=1,u=1,a[101][101],b[101][101];
main()
{
 //freopen ("slalom.in","r",stdin);
 //freopen ("slalom.out","w",stdout);

 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

 scanf ("%d",&n);

  for (i=1;i<=n;i++)
    for (j=1;j<=i;j++)
        scanf ("%d",&a[i][j]);

  b[1][1]=a[1][1];

  for (i=2;i<=n;i++)
  b[i][1]=a[i][1]+b[i-1][1];

  for (i=2;i<=n;i++)
  b[i][i]=b[i-1][i-1]+a[i][i];

        for (i=3;i<=n;i++)
        {
            for (j=2;j<i;j++)
             {
                 b[i][j]=a[i][j]+max(b[i-1][j],b[i-1][j-1]);
             }
        }

        for (i=1;i<=n;i++)
          if (b[n][i]>max_ans)max_ans=b[n][i];

         printf ("%d",max_ans);

return 0;
}
