#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<vector>
#include<queue>
using namespace std;
const int INF=1000000000;
__int64 n,m,i,j,k,l=0,r=0,c=0,v=0,u=0,a[1000001],b[1000001],d[101][101];
pair <int,int>p[1000001],pred[1001][1001];
queue<int>q,q2;
bool used[1000001];
char s[1001][1001];
main()
{

       scanf ("%I64d%I64d",&n,&m);

        for (i=1;i<=n;i++)
        {
         scanf ("%I64d%I64d",&a[i],&b[i]);
          c+=b[i]-a[i]+1;
        }

        while (c%m!=0)
         {
            v++;
            c++;
         }

         printf ("%I64d",v);



//system ("pause");
return 0;
}
