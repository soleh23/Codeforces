#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int l=1,max1=-1233,j=0,i,n,m,k,c=0,v=1,a[1000001],b[1000001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
   scanf ("%d%d",&n,&m);
 
   for (i=1;i<=m;i++)
    {
    scanf ("%d",&a[i]);
    b[i]=a[i];
    }
   
    k=n;  
    v=m;
      

      
     while (k>0)
      { 
           sort (a+1,a+m+1);
         if (k>0)c+=a[v],k--;
         a[v]--;
         
      }
       while (n>0)
      { 
         sort (b+l,b+m+1);
         if (n>0)j+=b[l],n--;
         b[l]--;
         if (b[l]==0)l++;
         
      }
      

      printf ("%d %d",c,j);

 //system ("pause"); 
 return 0;
}
