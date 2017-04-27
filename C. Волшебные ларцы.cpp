#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<vector>
#include<map>
#include<stdlib.h>
using namespace std;
const int INF=1000000000;
__int64 c=0,v=0,r=0,n,m,i,j,k,l,max1=-1,min1=INF,a[1000001],b[100005];
pair<__int64,__int64>p[100005];
main()
{
 //freopen ("input.txt","r",stdin);
 //freopen ("output.txt","w",stdout);

   scanf ("%I64d",&n);

    for (i=0;i<n;i++)
     scanf ("%I64d%I64d",&p[i].first,&p[i].second);

      for (i=0;i<n;i++)
       {
           r=max(r,p[i].first);
           c=p[i].first;
           v=1;
           while (v<p[i].second)
            {
                v*=4;
                c++;
            }
            if (max1<c)max1=c;
       }
       if (max1==r)max1++;
       printf ("%I64d",max1);


return 0;
}

