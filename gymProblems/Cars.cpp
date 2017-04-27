#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
using namespace std;
const int INF=1000000007;
__int64 n,m,i,j,l,r,a[1000001],b[1000001],max1=-INF;
queue<__int64>q;
vector<int>g;
char s;
__int64 sum=0,k;
double sa=0;
map<__int64,__int64>used;
main()
{
  freopen ("cars.in","r",stdin);
  freopen ("cars.out","w",stdout);

  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

   scanf("%I64d",&n);

    for (i=1;i<=n;i++)
     {
        cin>>s;
        if (s=='+')
          {
             cin>>k;

             used[k]++;

             q.push(k);

             sum+=k;

             if (sum%q.size()!=0)sa=-1;
             else sa=sum/q.size();
          }
          else if (s=='-')
           {
              sum-=q.front();

              used[q.front()]--;

              q.pop();
              if (q.size()==0 || sum%(q.size())!=0)sa=-1;
             else sa=sum/q.size();

           }
           else printf ("%I64d\n",used[sa]);
     }





return 0;
}
