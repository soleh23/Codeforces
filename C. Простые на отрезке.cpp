#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
const int INF=1000000000;
__int64 z=0,n,m,i,j,k,l,c=0,v=0,u=0,a[1000001],b[1000001];
bool used[1200001];
main()
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);

  scanf ("%I64d%I64d%I64d",&n,&m,&k);

   for (i=2;i<=m;i++)
    {
        if (!used[i])
         {
             for (j=i*i;j<=n;j+=i)
               used[j]=true;
         }
    }







return 0;
}
