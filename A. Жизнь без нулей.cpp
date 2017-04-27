#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<queue>
#include<ctype.h>
using namespace std;
__int64 m,n,i,j,k=0,l=0,c=0,u=0,r,a[1000001],b[1000001];
vector<__int64>v,v2,v3;
__int64 power(__int64 x)
 {
     int i,gh=1;
     for (i=1;i<=x;i++)
     gh*=10;

     return gh;
 }
main()
{

  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  scanf ("%I64d%I64d",&n,&m);

 u=n+m;

/////////////////////////////////////////////////////////////

  while (n>0)
   {
      if (n%10!=0)v.push_back(n%10);
       n/=10;
   }
   while (m>0)
   {
       if (m%10!=0)v2.push_back(m%10);
       m/=10;
   }
   while (u>0)
   {
       if (u%10!=0)v3.push_back(u%10);
       u/=10;
   }

////////////////////////////////////////////////////////////

   for (r=0;r<v.size();r++)
  {
    l+=v[r]*power(r);
  }
  for (i=0;i<v2.size();i++)
  {
     k+=v2[i]*power(i);
  }
    for (j=0;j<v3.size();j++)
  {
     c+=v3[j]*power(j);
  }


///////////////////////////////////////////////////////////

//printf ("%I64d %I64d %I64d",c,l,k);

if (c==l+k)printf ("YES");
else printf("NO");


return 0;
}
