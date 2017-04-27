#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=0,v=0,u=0,r,a[1000001],b[1000001];
char s[1000001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf ("%d%d",&n,&m);

for (i=1;i<=n;i++)
 scanf ("%d",&a[i]);

  for (i=1;i<=n;i++)
   {
       if (m>0)
        {
              if (a[i]<0)a[i]*=-1;
             else
              {
                  if (m%2==1)
                   {
                       if (i!=1) v=min(a[i-1],a[i]);
                       else v=a[i];
                   }
                   m=0;
              }
              m--;
        }
        u+=a[i];
   }
   if (m>0 && m%2==1)v=a[n];
   printf ("%d",u-(v*2));
return 0;
}
