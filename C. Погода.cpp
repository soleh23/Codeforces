#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int INF=100000000;
int qw=0,qw2=0,b[1000001],r=0,n,m,a[1000001],w=-1,c=0,v=0,i=1,j,k=1,l=0,min_l=9999999;
pair<int,int>f[10001];
main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
 scanf ("%d",&n);
 for (i=1;i<=n;i++)
  {
  scanf ("%d",&a[i]);
  if (a[i]!=0){b[k]=a[i];k++;}
  if (a[i]==0)v++;
  if (a[i]>0)qw++;
  if (a[i]<0)qw2++;
  }
  c+=v;
  k--;
   
   int y,y2,z,z2;
   for(i=1;i<=k;i++)
    if (b[i]<0){y=i;break;}

   for(i=k;i>=1;i--)
    if (b[i]<0){y2=i;break;}
    
   for(i=1;i<=k;i++)
    if (b[i]>0){z=i;break;}

   for(i=k;i>=1;i--)
    if (b[i]>0){z2=i;break;}
   

     for (i=1;i<=y2;i++)
      {
        if (b[i]>0)l++;
        if (qw==0)l++;
      }
      for (i=k;i>=z;i--)
       {
         if (b[i]<0)r++;
         if (qw2==0)r++;
       }
       c+=min(l,r);
    
printf ("%d",c);

return 0; 
}
