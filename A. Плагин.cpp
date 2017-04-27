#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0;
char s2[200001],s[2000001];
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);

 cin>>s;
  l=strlen(s);
  s2[u]=s[0];
  for (i=1;i<l;i++)
   {
       if (s2[u]==s[i])u--;
        else {u++;s2[u]=s[i];}
   }

   for (i=0;i<=u;i++)
    printf ("%c",s2[i]);

return 0;
}
