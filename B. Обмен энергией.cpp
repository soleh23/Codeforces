#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
int n,m,i,j,k,l,a[100001],max_v=-1;
double b[100001],p=0,c=0,v=0;
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

scanf ("%d%d",&n,&k);

 for (i=1;i<=n;i++)
  {
      scanf ("%d",&a[i]);
      if (a[i]>max_v)max_v=a[i];
  }

for (i=1;i<=max_v;i++)
 {
     b[i]=(i*k)/100;
  printf ("%d ",(i*k));
 }

for (i=1;i<=max_v;i++)
 //printf ("%lf ",b[i]);




return 0;
}
