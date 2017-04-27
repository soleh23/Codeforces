#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int INF=100000000;
int f[10001],z=0,r=0,n,m,a[10001],w=-1,c=0,v=0,i,j,k=0,l=0,min_l=9999999;
char s[101],s2[101][101];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%s%d",&s,&n);
r=strlen(s);
for (i=0;i<n;i++)
{
 scanf ("%s",&s2[i]);
  l=strlen (s2[i]);
     for (j=0;j<l;j++)
      {
          if (s2[i][j]==s[c] && c!=r)c++;
          else if (s2[i][j]!=s[c] && c<r){v=INF;break;}
          //if (c==r)v++;
      }
      if (s2[k]>s2[i]){w++,min_l=v;k=i;}
      //printf ("%d\n",v);
      c=0;
      v=0;
} 
if (w==-1)printf ("%s",s);
else printf ("%s",s2[k]);

system ("pause");
return 0; 
}
