#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
#include<queue>
using namespace std;
const int INF=100000000;
int n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
pair<int,int>p[100001];
queue<int>q;
vector<int>g;
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
  scanf ("%s",s);

   l=strlen (s);

    for (i=0;i<l;i++)
    {
     if (s[i]=='x')c++;
     else v++;
    }

    u=min(c,v);
    c-=u;
    v-=u;

     for (i=1;i<=c;i++)
      printf ("x");

      for (i=1;i<=v;i++)
       printf ("y");
return 0;
}
