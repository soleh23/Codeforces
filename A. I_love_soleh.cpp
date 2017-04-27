#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
int n,m=10,i,j=1,k=0,l=0,max1=-1,min1=99999999,a[10000001];
using namespace std ;
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

cin>>n;
 
 for (i=1;i<=n;i++)
  {
     cin>>a[i];                 
  }

   for (i=3;i<=n;i++)
    {
       for (j=1;j<i;j++)
        {
          if (min1>a[j])min1=a[j];
          if (max1<a[j])max1=a[j];
        }
        if (a[i]>max1 || a[i]<min1)l++;
    }
    if (a[2]!=a[1] && n>1)l++;
  cout<<l;
//getchar ();
//getchar ();
return 0;
}
