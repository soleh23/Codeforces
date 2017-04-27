#include<stdio.h>
main()
{
int min1=9999999,m,a[100001],b[100001],d[100001],i,j,n,k,l,c=0,v=0;
 scanf ("%d%d",&n,&m);

  for (i=1;i<=n;i++)
   {
   scanf ("%d",&a[i]);
   if (a[i]!=a[i-1] || i==1)d[c]=a[i],c++;
   }

   for (i=1;i<=m;i++)
    b[i]=c-1;

    for (i=1;i<c-1;i++)
     {
        if (d[i-1]!=d[i+1])b[d[i]]--;
        else b[d[i]]-=2;
     }
    b[d[0]]--;
    b[d[c-1]]--;

     for (i=1;i<=m;i++)
      if (b[i]<min1)min1=b[i],v=i;

 printf ("%d",v);


return 0;
}
