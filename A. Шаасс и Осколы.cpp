#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int INF=1000000000;
int a[1001],b[1001],x,y,max1=0,n,m,i,j,k,l,c=0,v=0,u=0,r,ans;
 main()
 {

//  freopen ("input.txt","r",stdin);
//  freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   for (i=1;i<=n;i++)
    scanf ("%d",&a[i]);

    scanf ("%d",&m);

    for (i=1;i<=m;i++)
     {
       scanf ("%d%d",&l,&r);

        a[l+1]+=a[l]-r;
        a[l-1]+=r-1;
        a[l]=0;
     }

     for (i=1;i<=n;i++)
      printf("%d\n",a[i]);

return 0;
 }
