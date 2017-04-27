#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
__int64 zet(__int64 x)
{
  int a;
  if (x==1 || x==5 || x==9)return 1;
  else if (x==3 || x==7)return 2;
  a=(x/10)%10;
  if (a%2==1 && x%10==3 || a%2==1 && x%10==7 || a%2==0 && x%10==1 || a%2==0 && x%10==5 || a%2==0 && x%10==9)return 1;
  else return 2;
}
 
__int64 m,n,i,j,k,l=1,c=0,v=1;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%I64d",&k); 
 
 for (i=1;i<=k;i++)
  {
    scanf ("%I64d",&n);
     if (n%2==0)printf ("%I64d",(n*4)+1);
     else 
      {
          if (zet(n)==1)printf ("%I64d",n*2+1);
          else printf ("%I64d",n+1); 
           
      }
     printf ("\n");
  }
//system ("pause");
return 0; 
}
