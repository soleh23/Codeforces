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
int t,r,n,m,i,j,k,l,c=1,v=0,u=0,a[1000001],b[100101],f[100001];
vector< vector<int> >g;
vector<char>h,h2;
char s[1000001],s2[1000001];
pair<int,int>p[1001];
queue<int>q;
bool used[100001];
string gh;
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   for (i=1;i<=n-3;i++)
    {
       if (i%4==1)printf("R");
       if (i%4==2)printf("O");
       if (i%4==3)printf("Y");
       if (i%4==0)printf("G");
    }
    printf ("BIV");


return 0;
}
