#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int i,n,m,k=0,c=0,v=0,a[1000001],b[10001];
pair<int,int>f[100001];
char s[100001];
main()
{
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
scanf ("%d%d",&m,&n);

 for (i=0;i<n;i++)
     scanf ("%d%d",&f[i].first,&f[i].second);

  sort (f,f+n);

   for (i=0;i<n;i++)
    {
       if (m>f[i].first)m+=f[i].second;
       else {printf ("NO");return 0;}
    }
    printf ("YES");


 return 0;
}
