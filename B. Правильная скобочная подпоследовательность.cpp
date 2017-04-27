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
int n,m,i,j,k,l,r,c=0,v=0,u=0,a[1000001],d[1001][1001],b[1000001];
stack<int>s;
char s2[1000001];
main()
{
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);

   scanf ("%s",s2);

    l=strlen (s2);

    for (i=0;i<l;i++)
     {
       if (s2[i]=='(')k=-1;
       else k=1;

       if (k==1 && c==-1 && i>0 && !s.empty())v++,s.pop();
       else s.push(k);

     if (!s.empty())c=s.top();
     else c=0;

     }

    printf ("%d",l-s.size());

return 0;
}
