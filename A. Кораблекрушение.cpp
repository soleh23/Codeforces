#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<queue>
int m,n,i,j,k,l,c=0,v=0,u=0,r;
char s[101][101],s2[101][101];
using namespace std;
main()
{
 // freopen ("input.txt","r",stdin);
 // freopen ("output.txt","w",stdout);

 scanf ("%d",&n);
k=n;
  for (i=0;i<n;i++)
   scanf ("%s %s",&s[i],&s2[i]);

  while (k>0)
   {
       v++;
       for (i=0;i<n;i++)
        {
           if (v==1 && s2[i][0]=='r'){c++;printf ("%s\n",s[i]),s2[i][0]='-';}
           if (v==2 && s2[i][0]=='w' || v==2 && s2[i][0]=='c' && s2[i][1]=='h'){c++;printf ("%s\n",s[i]),s2[i][0]='-';}
           if (v==3 && s2[i][0]=='m'){c++;printf ("%s\n",s[i]),s2[i][0]='-';}
           if (v==4 && s2[i][0]=='c' && s2[i][1]=='a'){c++;printf ("%s\n",s[i]),s2[i][0]='-';}
        }
       k-=c;
       c=0;
   }

return 0;
}
