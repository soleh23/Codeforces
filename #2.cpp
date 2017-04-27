#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
int a[100001],n,m,i,j,c=0,v=0;

using namespace std;
main()
{

scanf("%d",&n);

for (i=1;i<=n;i++)
{
  scanf ("%d",&a[i]);
}

int k;
sort(a+1,a+1+n);

k=a[n];

if (n%2==1)
{

  for (i=n-2;i>=1;i-=2)
  {
  c+=a[i];

  }
  c+=a[n-1];
  
   
  for (i=n-3;i>=1;i-=2)
  {
  v+=a[i];
  }
  v+=a[n];

if (abs(c-v)<=k)
{
                 printf ("%d\n",(n/2)+1);
   for (i=n-2;i>=1;i-=2)
  {
    printf("%d ",i);
  }
  printf("%d\n",n-1);
                   printf ("%d\n",(n/2));
   for (i=n-3;i>=1;i-=2)
  {
    printf("%d ",i);
  }
  printf("%d",n);
}
}

else
{
     for (i=n-2;i>=1;i-=2)
  {
  c+=a[i];

  }
  c+=a[n-1];
  
   
  for (i=n-3;i>=1;i-=2)
  {
  v+=a[i];
  }
  v+=a[n];

if (abs(c-v)<=k)
{
                 printf ("%d\n",(n/2));
   for (i=n-2;i>=1;i-=2)
  {
    printf("%d ",i);
  }
  printf("%d\n",n-1);
                   printf ("%d\n",(n/2));
   for (i=n-3;i>=1;i-=2)
  {
    printf("%d ",i);
  }
  printf("%d",n);
}
}
return 0;
}
