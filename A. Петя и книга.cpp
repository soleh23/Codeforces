#include<stdio.h>
int n,a[10001],c=0,i,p=1,v=0;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%i",&n);

for (i=1;i<=7;i++)
scanf ("%d",&a[i]);

while (c<n)
{
 if (p>7)p=1;
 
 c+=a[p];
 p++;
 v++;
}
if (v%7!=0)printf ("%d",v%7);
else printf ("7");
return 0;
}
