#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
int a[100001],i,j,k,l,c=0,n,m,v=0;
char s[100001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%s",s);
  l=strlen(s);
   
   for (i=0;i<l;i++)
    {
       if (s[i]=='.')printf ("0");
       else if (s[i]=='-' && s[i+1]=='.')printf ("1"),i++;
       else if (s[i]=='-' && s[i+1]=='-')printf ("2"),i++;
    }
//system ("pause");
return 0; 
}
