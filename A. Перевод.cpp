#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
char s[101],s2[101];
 int i,j,c=0,v=0,l,k;
using namespace std;
main()
{
 
 scanf ("%s%s",s,s2);
  
  l=strlen(s);
  k=strlen(s2);
  
     char r[202];
    
   for (i=k-1;i>=0;i--)
   {
     r[c]=s2[i];
     c++;
   }
   
   for (i=0;i<l;i++)
    if (s[i]==r[i])v++;
   
if (l==k && v==l)
printf ("YES");
else printf ("NO");
return 0;          
}         
