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
int x,y,max1=0,n,m,i,j,k,l,c=0,v=0,u=0,r,ans;
vector<int>a,b;
 main()
 {

//  freopen ("input.txt","r",stdin);
//  freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   for (i=1;i<=n;i++)
    {
      scanf ("%d%d",&x,&y);
     max1+=y;
     ans+=x;
    if (x==1)a.push_back(y);
    else  b.push_back(y);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for (i=0;i<=a.size();i++)
     {
         for (j=0;j<=b.size();j++)
          {
              c=0;
              for (k=0;k<i;k++)c+=a[k];

               for (l=0;l<j;l++)c+=b[l];

                if (max1-c<=i+(2*j) && ans>i+(2*j))
                ans=i+(2*j);
          }
     }
     printf ("%d",ans);


return 0;
 }
