#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,r,a[1000001],b[1000001],max1=-INF;
queue<int>q;
vector<int>g;
char s[101][101],s2[101][101];
main()
{
   freopen ("denisov.in","r",stdin);
   freopen ("denisov.out","w",stdout);

 //  freopen ("input.txt","r",stdin);
 //  freopen ("output.txt","w",stdout);

  scanf ("%d",&n);

   for (i=0;i<n;i++)
    {
       scanf ("%d%s%s",&a[i],&s[i],&s2[i]);

       if (strlen(s2[i])==6 && s2[i][0]=='R' && s2[i][1]=='u' && s2[i][2]=='s' && s2[i][3]=='s' && s2[i][4]=='i' && s2[i][5]=='a')
         {
            if (max1<a[i])max1=a[i],r=i;

         }
    }

    printf ("%s",s[r]);

return 0;
}
