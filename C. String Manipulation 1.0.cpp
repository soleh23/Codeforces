#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<vector>
using namespace std;
int j,l,i,n, k, d=0, p=0, nl, np,x,a,c=0,v=0;
vector< vector<int> >h;
char s[200001],s2[10001],gh[200001],b;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%s%d",&k,&s,&n);
h.resize(30);

 l=strlen (s);

  for (i=0;i<k;i++)
   {
     for (j=0;j<l;j++)
      {
          gh[p]=s[j];
          h[s[j]-96].push_back(p);
          p++;
      }
   }

for (i=0;i<n;i++)
{
    cin>>a>>b;
    gh[h[b-96][a-1]]='-';
    h[b-96].erase(h[b-96].begin()+a-1);

}
for (i=0;i<p;i++)
 if (gh[i]!='-')printf ("%c",gh[i]);
 /*for (i=1;i<=26;i++)
  {
      for (j=0;j<h[i].size();j++)
       printf ("%d ",h[i][j]);
       printf ("\n");
  }
*/
return 0;
}
