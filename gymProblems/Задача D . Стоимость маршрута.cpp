#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<vector>
using namespace std;
const int INF=1000000000;
int b[10][10],r=0,n,m,a[101][101],c=0,v=0,i,j,k,l=0;
main()
{
freopen("king2.in","r",stdin);
freopen("king2.out","w",stdout);



for (i=1;i<=8;i++)
 for (j=1;j<=8;j++)
  scanf ("%d",&a[i][j]);


 b[8][1]=a[8][1];

 for (i=7;i>=1;i--)
  b[i][1]=a[i][1]+b[i+1][1];

 for (i=2;i<=8;i++)
  b[8][i]=a[8][i]+b[8][i-1];

  for (i=7;i>=1;i--)
   {
     for (j=2;j<=8;j++)
      {
         b[i][j]=a[i][j]+min(b[i+1][j-1],min(b[i][j-1],b[i+1][j]));
      }
   }
  printf ("%d",b[1][8]);

return 0;
}
