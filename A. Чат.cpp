#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int l,i,n,m,k=0,c=0,v=0,a[1000001],b[10001];
pair<int,int>f[100001];
char s[100001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
scanf ("%s",s);

 l=strlen (s);

  for (i=0;i<l;i++)
   {
      if (s[i]=='h' && c==0)c++;
      else if (s[i]=='e' && c==1)c++;
     else  if (s[i]=='l' && c==2)c++;
     else  if (s[i]=='l' && c==3)c++;
     else  if (s[i]=='o' && c==4)c++;
   }
   if (c==5)printf ("YES");
   else printf ("NO");




 return 0;
}
