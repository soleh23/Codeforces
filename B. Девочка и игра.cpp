#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<map>
#include<vector>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
__int64 kol=-INF,n,m,i,j,l,r,c=0,v=0,u=0,a[1000001],b[1000001],d[1000001],max1=-INF,k[1000001];
char s[1000001],s2[1000001];
vector<int>g,g2;
pair<int,int>p[1000001],p2[1000001];
main()
{
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

  scanf ("%s",s);

   l=strlen (s);

   for (i=0;i<l;i++)
    b[s[i]-96]++;

    for (i=1;i<=26;i++)
     if (b[i]%2==1)c++;

     if (c<=1){printf ("First");return 0;}

     if (c%2==0){printf ("Second");return 0;}
          printf ("First");

return 0;
}
