#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=-1000000000;
char s[10001];
int f[10001],r[10010],a[10001],m,n,i,j=0,k,c=0,v,p=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
cin>>s;
 k=strlen (s);
 for (i=0;i<k;i++)
  {
   if (s[i]>=97 && s[i]<=122)c++;
  }
  if (c>=k-c)
   {
     for (i=0;i<k;i++)
      if (s[i]>=65 && s[i]<=90)printf ("%c",s[i]+32);
      else printf ("%c",s[i]);
   }
   else
    {
          for (i=0;i<k;i++)
      if (s[i]>=97 && s[i]<=122)printf ("%c",s[i]-32);
      else printf ("%c",s[i]);
    }
    //system ("pause");
return 0; 
}
