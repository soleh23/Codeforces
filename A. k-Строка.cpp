#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
int j,l,i,n, k, d=0, p, nl, np,x,a[30];
char s[100001],s2[10001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d%s",&n,s);

 l=strlen (s);

  for (i=0;i<l;i++)
   {
      a[s[i]-96]++;
   }

   for (i=1;i<=26;i++)
    if (a[i]%n!=0){printf ("-1");return 0;}

     for (i=1;i<=26;i++)
      {
         if (a[i]>0)
          {
              for (j=1;j<=a[i]/n;j++)
               {
                   printf("%c",i+96);
                   s2[d]=i+96;
                   d++;
               }
          }
      }

for (i=1;i<n;i++)
 printf("%s",s2);

return 0;
}
