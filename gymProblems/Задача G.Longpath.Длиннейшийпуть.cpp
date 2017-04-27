#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
#include<map>
using namespace std;
int max_ans=0,y=0,n,m,i,j,k,l,c=1,v=1,r;
vector< pair<int,int> >f;
bool x=false;
main()
{
 freopen ("longpath.in","r",stdin);
 freopen ("longpath.out","w",stdout);
 scanf ("%d%d",&n,&m);

  for (i=1;i<=m;i++)
   {
       scanf ("%d%d",&k,&l);
       f.push_back(make_pair(k,l));
   }

     sort (f.begin(),f.end());

   for (i=0;i<f.size();i++)
    {
        if (!x)k=f[i].second;

       l=i+1;
       r=f.size();

        while (l<r)
         {
             v=(l+r)/2;
             if (f[v].first<k)l=v+1;
             else r=v;
         }
       if (f[r].first==k)
        {
            c++;
            if (max_ans<c)max_ans=c;
            k=f[r].second;
            x=true;
        }
        else x=false,c=1;

      f.erase(f.begin()+i);
    }

    printf ("%d",max_ans);

return 0;
}
