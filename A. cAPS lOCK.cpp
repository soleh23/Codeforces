#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
int i,j,c=0,v=0,k,l;
char s[202002];
using namespace std;
main()
{
 scanf ("%s",s);
 
   l=strlen (s);
    
  
  for (i=0;i<l;i++)
     if (s[i]>64 && s[i]<91)c++;
      
      if (c==l)
       {
         for (i=0;i<l;++ i)
          printf ("%c",s[i]+32);
       return 0;
       }
       
       c=0;
       
       if (s[0]>96 && s[0]<123)c++;
       
       for (i=1;i<l;i++)
         if (s[i]>64 && s[i]<91)c++;
         
      if (c==l)
       {
               printf ("%c",s[0]-32);
         for (i=1;i<l;++ i)
          printf ("%c",s[i]+32);
       return 0;
       }
       
       for (i=0;i<l;i++)
        printf ("%c",s[i]);

return 0;           
}         
