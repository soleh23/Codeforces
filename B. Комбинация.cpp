#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
#include<algorithm>
#define sc second 
#define fr first
using namespace std;
const int INF=-1000000000;
int y,x,i,j,k,l,n,m,t,c=1,v=0,r;
pair <int ,int >a[100001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
k=n;
 for (i=1;i<=n;i++)
  {
    scanf ("%d%d",&a[i].sc,&a[i].fr);
    
  }
  sort (a+1,a+n+1);
 
 /*for (i=1;i<=n;i++)
  printf ("%d %d\n",a[i].fr,a[i].sc);*/
 while (c>0 && n>0)
   {
    v+=a[k].sc;
    c+=a[k].fr;
    k--;   
    c--;
    n--;
   }/*
      7
   9 1
   8 1
   9 0
   9 1
   5 1
   1 1
   0 1*/
   printf ("%d",v);
   
//system ("pause");
return 0; 
}
