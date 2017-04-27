#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
int max_ans=0,y=0,n,m,i,j,k,l,c=2,v=1,f[10001];
main()
{
 //freopen ("badsubs.in","r",stdin);
 //freopen ("badsubs.out","w",stdout);

 scanf ("%d",&n);

  f[0]=1;
  f[1]=3;

  for (i=2;i<=n;i++)
   {
     f[i]=(f[i-1]*2)+c;
     c+=f[i-1];
   }

    printf ("%d",f[n]);
return 0;
}
