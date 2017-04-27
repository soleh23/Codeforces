/*
INCORRECT(((
*/
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int r,num=1,den=1,j,n,m,i,c=0,v=0,c1,v1,u=0,tmp1,tmp2,ans1,ans2,k,l,a[10001],b[10001];
vector< pair<int,int> >p;
int gcd(int x,int y)
 {
     if (y==0)return x;
     else return gcd(y,x%y);
 }
 void qwe(int x1,int y1,int x2,int y2)
  {
      num=(x1*y2)+(x2*y1);
      den=y1*y2;

      u=gcd(num,den);

      num/=u;
      den/=u;
      den*=2;

      u=gcd(num,den);

      num/=u;
      den/=u;
  }
main()
{
   freopen ("input.txt","r",stdin);
   freopen ("output.txt","w",stdout);

 scanf ("%d",&n);

for (i=1;i<=n;i++)
 {
    scanf ("%d%d",&a[i],&b[i]);
 }
int yu=0;

for (i=1;i<=n;i++)
{
    if (a[i]==1 && b[i]==2)printf ("1 2\n"),yu++;
}

   tmp1=0;
   tmp2=1;
   ans1=1;
   ans2=2;

   c=1;
   v=2;
   c1=1;
   v1=1;

     for (i=1;i<=n;i++)
      {
       if (a[i]!=0 && a[i]==b[i])
       {
         qwe(tmp1,tmp2,ans1,ans2);
         l=num;
         r=den;

         qwe(c,v,c1,v1);

         for (j=1;j<=n;j++)
          {
              if (l==a[j] && r==b[j])
               {
                   printf ("%d %d\n",l,r);
                   ans1=l;
                   ans2=r;
                   c1=c;
                   v1=v;
                   c=l;
                   v=r;
                   break;
               }
              else if (num==a[j] && den==b[j])
               {
                   printf ("%d %d\n",num,den);
                   c=num;
                   v=den;
                   tmp1=ans1;
                   tmp2=ans2;
                   ans1=num;
                   ans2=den;
                   break;

               }
          }

       }
      }


return 0;
}
