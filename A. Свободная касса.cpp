#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int n,m,i,j,k,l,c=1,v=0,a[100001],b[100001],ans=-1;
pair <int,int>f[100001];
main()
 {
      //freopen ("input.txt","r",stdin);
      //freopen ("output.txt","w",stdout);
  scanf("%d",&n);
   
   for (i=0;i<n;i++)
    {
      scanf ("%d%d",&f[i].first,&f[i].second);
       
    } 

   for (i=1;i<n;i++)
    {
      if (f[i].first==f[i-1].first && f[i].second==f[i-1].second)c++;
      else {ans=max(ans,c);c=1,v++;}
     // printf ("%d %d\n",ans,c);
    } 
printf ("%d",max(ans,c));
//system ("pause");
 return 0;
 }
