#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int min1=99999999,s[10001],n,i,j,k,l,a[1000001],b[1000001],d[1000001],t[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
 for (i=1;i<=n;i++)
  scanf ("%d%d%d%d",&a[i],&b[i],&d[i],&t[i]);
   
   for (i=1;i<=n;i++)
    {
       for (j=1;j<=n;j++)
         {
            if (a[i]<a[j] && b[i]<b[j] && d[i]<d[j])s[i]=1;
         }
    }
  
   for (i=1;i<=n;i++)
    {
      if (t[i]<min1 && s[i]!=1)min1=t[i],l=i;
    }
   printf("%d",l);   
//system ("pause");
return 0; 
}
