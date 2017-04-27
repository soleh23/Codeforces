#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
int a[1000001],n,m,i,j,k,l,c=0,v=1,u=0;
char s[101];
main()
{
//freopen ("input.txt","r",stdin);
//freopen ("output.txt","w",stdout);
cin>>s;

 l=strlen (s);

  for (i=0;i<l-1;i++)
   {
     if (v==5 || s[i]!=s[i+1])
      {
        c++;
        v=1;
      }
      else v++;
   }

   printf ("%d",c+1);


return 0;
}
