#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<stack>
using namespace std;
const int INF=1000000000;
int u=1,z,n,m,i,j=0,k,l,max1=-INF,min1=INF,a[10000001];
vector <int>g;
struct qwe
 {
     int val;
     int lp;
     int rp;
 }d[1000001];

  void rec(int li,int ri,int vm)
   {
       if (li==d[vm].lp && ri==d[vm].rp)
        {
            if(min1>d[vm].val)min1=d[vm].val;
        }
        else
         {
             if (li<=d[vm*2].rp)rec(li,min(d[vm*2].rp,ri),vm*2);
             if (ri>=d[(vm*2)+1].lp)rec(max(li,d[(vm*2)+1].lp),ri,(vm*2)+1);
         }
   }
main()
{
 freopen ("race.in","r",stdin);
 freopen ("race.out","w",stdout);

  scanf ("%d",&n);

   for (i=1;i<=n;i++)
       scanf ("%d",&a[i]);


    for (i=1;i<=20;i++)
     {
          if (u>=n)break;
          u*=2;
     }

    int st=1;

     for (i=u;i<2*u;i++)
      {
         if (st<=n) d[i].val=a[st];
          else d[i].val=INF;

          d[i].lp=st;
          d[i].rp=st;
          st++;
      }

      for (i=u-1;i>=1;i--)
       {
           d[i].val=min(d[i*2].val,d[(i*2)+1].val);
           d[i].lp=d[i*2].lp;
           d[i].rp=d[(i*2)+1].rp;
       }

       j=0;
       k=1;

     for (i=1;i<n;i++)
      {
        rec(i+1,n,1);

        if (min1>i)g.push_back(i);

       min1=INF;
      }

      printf ("%d\n",g.size()+1);

      for (i=0;i<g.size();i++)
       printf ("%d ",g[i]);

       printf ("%d",n);





return 0;
}
