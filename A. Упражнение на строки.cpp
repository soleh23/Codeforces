#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int l,k,u=0,m,n,a[1001],i,c=0,v=0;
char s[101],r[203];
main()
{
 scanf ("%s",s);
  l=strlen(s);
  
   for (i=0;i<l;i++)
      if (s[i]>64 && s[i]<91)s[i]+=32;
    
    
    for (i=0;i<l; ++i)
     {
       if (s[i]!='a' && s[i]!='u' && s[i]!='e' && s[i]!='i' && s[i]!='y' && s[i]!='o'){r[c]=s[i];c++;}
     }
     
     for (i=0;i<c;i++)
      {
        printf (".%c",r[i]);
      }
   
return 0;           
}         
