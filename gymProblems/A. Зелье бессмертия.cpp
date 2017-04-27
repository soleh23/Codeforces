#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
#include<stdlib.h>
#include<map>
#define mp make_pair
using namespace std;
const int INF=1000000000;
int a1,b1,c1,timer=0,n,m,i,j,k,l=1,c=0,u=0,a[101][101],res[101][101],d[1000001];
vector< pair<int,int> >g,r;
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

   scanf ("%d%d",&n,&m);

  if (n%m==0 || n%m==1)
   printf ("%d",n-m);
   else printf ("-1");



return 0;
}
