#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int n,m,i,j,k,l,c=0,v=0,r=0,u=0;

pair<int,int>f[100001];
main()
{
 scanf ("%d",&n);

  for (i=0;i<n;i++)
   scanf ("%d%d",&f[i].first,&f[i].second);

    sort (f,f+n);

    for (i=0;i<n;i++)
     {
        for (j=i+1;j<n;j++)
         {
            c=f[i].first+f[j].first;
            v=f[i].second+f[j].second;

            if (c%2==0 && v%2==0)
             {
                 //printf ("%d %d",c,v);
                c/=2;
                v/=2;

                l=0;
                r=n;

              while (l<r)
               {
                  m=(l+r)/2;
                  if (f[m].first<c || f[m].first==c && f[m].second<v)l=m+1;
                  else r=m;
               }
               if (f[r].first==c && f[r].second==v)u++;
             }

         }

     }
printf ("%d",u);

return 0;
}
