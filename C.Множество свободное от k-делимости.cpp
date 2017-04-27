#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l,r,c=0,v=0,u=0,a[1000001],b[1000001];
pair <int,int>f[1000001];
vector<int>d;
queue<int>q;
char s[1000001];
map<__int64,bool>mp;
main()
{
 scanf ("%I64d%I64d",&n,&m);

  c=n;

  for (i=1;i<=n;i++)
  {
   scanf ("%I64d",&a[i]);
  }
   if (m==1){printf ("%I64d",n);return 0;}
  sort (a+1,a+n+1);

  for (i=n;i>=1;i--)
  {
   if (mp[a[i]*m])c--;
   else
    {
       mp[a[i]]=true;
    }
  }
   printf ("%I64d",c);

//system ("pause");
return 0;
}
