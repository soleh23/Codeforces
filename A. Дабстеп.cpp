#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
char s[10001],res[10001];
int i,k,l,c=0,v=0,j=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%s",s);
 
 l=strlen (s);
 
 for (i=0;i<l;i++)
  {
    if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
     {
       s[i]='.';
       s[i+1]='.';
       s[i+2]='.';
       i+=2;
     }
  }
  
  for (i=0;i<l;i++)
  {if (s[i]=='.')c++;
  else break;}
  
  for (i=l-1;i>=0;i--)
  {if (s[i]=='.')v++;else break;}

  
  for (i=c;i<l-v;i++)
   {
    
    if (s[i]!='.') printf ("%c",s[i]),j=0;
    if (s[i]=='.' && j==0) printf (" "),j=1;
   }
 
   
 //system ("pause");
return 0; 
}
