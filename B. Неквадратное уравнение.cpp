#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
__int64 sum (__int64 a)
 {
       int y=0,c=0; 
   while (a>0)
   {c+=a%10;a/=10;}
   return c;
 } 
__int64 n,x,m,i,j,k,v=0,r,l,min_ans=-1;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%I64d",&n);

  r=sqrt(n);
 
     for (i=r-100000;i<=100000+r;i++)
      {
               x=i*i+sum(i)*i;        
        if (x==n && i>0)
          {
           min_ans=i;     
           break;
          }
      }//10000006999999929
      printf ("%I64d",min_ans);
  //system ("pause");
return 0; 
}
