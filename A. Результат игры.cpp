#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int j,i,n,m,k=0,c=0,v=0,a[101][101];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

   scanf ("%d",&n);

    for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
      scanf ("%d",&a[i][j]);

       for (i=1;i<=n;i++)
        {
          for (j=1;j<=n;j++)
           {
            c=0;
            v=0;
             for (int y=1;y<=n;y++)
              c+=a[i][y];

              for (int u=1;u<=n;u++)
               v+=a[u][j];

               if (c<v)k++;
           }
        }
    printf ("%d",k);

 return 0;
}
