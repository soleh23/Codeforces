#include<stdio.h>
#include<string.h>
#include<ctype.h>
int n,a[100001],k,l,i,max=-9999,min=9999;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%i",&n);

for (i=1;i<=n;i++)
scanf ("%d",&a[i]);

for (i=1;i<=n;i++)
if (max<a[i])max=a[i];

for (k=1;k<=n;k++)
if (min>a[k])min=a[k];

for (l=n;l>=1;l--)
{
 if (min==a[l]){min=l;break;}
}
for (l=1;l<=n;l++)
{
 if (max==a[l]){max=l;break;}
}
if (max<min)printf ("%d",(max-1)+(n-min));
else printf ("%d",(max-1)+(n-min)-1);
return 0;
}
