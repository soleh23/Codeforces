#include <stdio.h>         
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector> 
#include<string.h>
using namespace std;  
const int INF=-1000000000;
char s[200],s2[200];
int l,i,j,c=0;
main()                                    
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
cin>>s>>s2;
 
 l=strlen (s);
 
 for (i=0;i<l;i++)
  {
    if (s[i]!=s2[i])printf ("1");
    else printf ("0");
  }

 //system ("pause");
 return 0;
}
