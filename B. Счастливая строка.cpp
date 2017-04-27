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
int t,r,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
vector< vector<int> >g;
vector<char>h,h2;
char s[1000001],s2[1000001];
string f;
queue<int>q;
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   f="abcd";

  for (i=0;i<n;i++)
   {
      if (i<4)
       {
           h.push_back(f[c]);
           a[c]=c;
           c++;
       }
        else
          {
             for (j=0;j<4;j++)
              {
                 if ((i-a[j])%4==0 || (i-a[j])%7==0){h.push_back(f[j]),a[j]=i;break;}
              }
          }
   }
      for (i=0;i<h.size();i++)
       printf ("%c",h[i]);

return 0;
}
