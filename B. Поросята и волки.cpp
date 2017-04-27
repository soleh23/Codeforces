#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int j,i,n,m,k=0,c=0,v=0,a[101][101];
char s[11][11];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

   scanf ("%d%d",&n,&m);

    for (i=0;i<n;i++)
      cin>>s[i];

      for (i=0;i<n;i++)
       {
          for (j=0;j<m;j++)
           {
             c=0;
             if (s[i][j]=='W')
              {
                 if (s[i][j-1]=='P')c++;
                 if (s[i][j+1]=='P')c++;
                 if (s[i-1][j]=='P')c++;
                 if (s[i+1][j]=='P')c++;
              }
              if (c>0)v++;
           }
       }
printf ("%d",v);
 return 0;
}
