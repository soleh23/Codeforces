#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
char a,b,c,d,e,s2[10];
int i,j,m,n;
main()//T», «J», «Q», «K» èëè «A»
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
cin>>a>>b>>c>>d>>e;
s2[0]='6';s2[1]='7';s2[2]='8';s2[3]='9';s2[4]='T';s2[5]='J';s2[6]='Q';s2[7]='K';s2[8]='A';
if (c==e)
 {
  for (i=0;i<9;i++) 
    {
      if (s2[i]==b){m=i;break;}
    }
  for (i=0;i<9;i++) 
    {
      if (s2[i]==d){n=i;break;}
    }
 if (m>n){printf ("YES");return 0;}
 }
 if (c==a && e!=a){printf ("YES");return 0;}
 printf ("NO");
//system ("pause");
return 0; 
}
