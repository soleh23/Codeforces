#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<queue>
int m,n,i,j,k,l,c=0,v=0,u=-9000000,r,a[1000001],b[1000001];
char s[101][101];
using namespace std;
main()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

 scanf ("%d",&n);
  int f,f1,f2,f3,f4,f5,f6;
  for (i=0;i<n;i++)
   {
     scanf ("%s%d%d%d%d%d%d%d",&s[i],&f,&f1,&f2,&f3,&f4,&f5,&f6);
     c+=f2+f3+f4+f5+f6;
     c+=f*100;
     c-=f1*50;
     if (c>u)u=c,v=i;
   c=0;
   }
   printf ("%s",s[v]);


return 0;
}
