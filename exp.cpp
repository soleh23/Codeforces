#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
const int INF=1000000000;
using namespace std ;
int n,m,i,j=1,k=0,l=0,max1=-INF,min1=INF,a[10000001];
vector<int>v;
priority_queue<int>f;
main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);

 scanf ("%d",&n);

  for (i=0;i<n;i++)
   {
       scanf ("%d",&m);
       f.push(m);
   }
   while(!f.empty())
    {
        printf ("%d ",f.top());
        f.pop();
    }


return 0;
}
