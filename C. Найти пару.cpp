#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<stack>
using namespace std;
#define LL long long int
const int INF=1000000000;
__int64 t,r,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
vector< vector<int> >g;
vector<int>h,h2;
char s[1000001],s2[1000001];
queue<int>q;
bool used[100001];
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

   scanf ("%I64d%I64d",&n,&k);

    for (i=1;i<=n;i++)
    {
     scanf ("%I64d",&a[i]);
      if (used[a[i]])u=1;
      used[a[i]]=true;
    }
     sort (a+1,a+n+1);

    if (u==1)
    {
       c=(k/n)+1;
       if (k%n==0)c--;

       v=k%n;
       if (v==0)v=n;

       printf ("%I64d %I64d",a[c],a[v]);

       return 0;
    }





return 0;
}
