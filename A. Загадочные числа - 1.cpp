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
const int INF=1000000000;
int t,r,n,m,i,j,k,l,c=1,v=0,u=0,z2[10][10],z[10][10],a[1000001],b[10][10][101],f[100001];
vector< vector<int> >g;
vector<int>h,h2;
char s[1000001],s2[1000001];
pair<int,int>p[1001];
queue<int>q;
main()
{
 //  freopen ("input.txt","r",stdin);
 //  freopen ("output.txt","w",stdout);

     scanf ("%d%s",&n,s);

      for (i=0;i<strlen (s);i++)
       {
         u+=(s[i]-48)*c;
         c*=10;
       }
       printf ("%d",u+n);

return 0;
}
