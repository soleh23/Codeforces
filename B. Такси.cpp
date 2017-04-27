#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int i,n,m,k=0,c=0,v=0,a[1000001],b[10];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  
scanf ("%d",&n);
  for (i=1;i<=n;i++)
   {
   scanf ("%d",&a[i]);
    b[a[i]]++;
   }
 
   c+=b[4];

  if (b[3]>=b[1])
   {
      c+=b[1];
      b[3]-=b[1];
      c+=b[3];
      b[1]=0;
   }     
   else 
   {
   c+=b[3];
   b[1]-=b[3];
   }
       c+=b[2]/2;
    
    if (b[2]%2==1)b[2]=1;
    else b[2]=0;
     
     if (b[1]>0)
      {
       c+=((b[2]*2)+b[1])/4;
       if (((b[2]*2)+b[1])%4!=0)c++;
      }
     else if (b[1]==0 && b[2]>0)
      {
        if (b[2]==1) c++;
        }

  printf ("%d",c);

  //system ("pause"); 
 return 0;
}
