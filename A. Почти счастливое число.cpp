#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int z=0,i,n,m,k=0,c=0,v=0,b[10],a[1000001];
char s[100001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  
 cin>>s;
 
 k=strlen(s);
  
for (i=0;i<k;i++)
 {
   if (s[i]=='4' || s[i]=='7')c++;
 }
 
 
  while (c>0)
   {
     a[v]=c%10;
     v++;
     c/=10;
   }
  
  
  for (i=0;i<v;i++)
   {
     if (a[i]==4 || a[i]==7){z++;}
   }
   
   if (z==1)cout<<"YES";
  else cout<<"NO";
 //system ("pause"); 
 return 0;
}
