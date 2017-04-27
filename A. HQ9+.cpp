#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int i,n,m,k=0,c=0,v=0,a[1000001],b[10];
char s[100001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  
 cin>>s;
 
 k=strlen(s);
  
  for (i=0;i<k;i++)
   {
      if (s[i]=='H' || s[i]=='Q' || s[i]=='9' )c++;
   }
   if (c>0)cout<<"YES";
   else cout<<"NO";

  //system ("pause"); 
 return 0;
}
