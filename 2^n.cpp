#include <iostream>
#include<stdio.h>
using namespace std;
int j,i,n,m,x=302,a[320],c=0;
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
a[x]=1;
scanf("%I64d",&n);
for (int i=1; i<=n; i ++)
{
for (int j=302; j>=1; j --)
   a [j] *= 2;

for (int j=302; j>=1; j --)
{
if (a[j]>9)
  {
   a [j-1] += a[j]/10;
   a [j] %= 10;
  }
}
}
int k;
for (int i=1; i<=302; i ++) if (a [i] != 0) {k=i;break;}
for (i=k;i<=302; i ++)
{
printf("%d",a[i]);
}

return 0;
}
