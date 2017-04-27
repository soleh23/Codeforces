#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
const int INF=1000000000;
int maxs=0,a[1000001],i,j,k,c=0,n,m,l=0,f[15];
vector <int>v;
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);

 for (i=0;i<n;i++)
  {
  scanf ("%d",&a[i]);
  f[a[i]]++;
  if (maxs<a[i])maxs=a[i];
  c+=a[i];
  }
  
  if (f[0]==0){printf ("-1");return 0;}
    
  sort (a,a+n);
   
   for (i=n-1;i>=0;i--)
    v.push_back(a[i]);
  
   if (c%3==0)
      {
      for (i=0;i<v.size();i++)
       printf ("%d",v[i]);
      
   //   return 0;
      }
   
  else if (c%3==1)
  { 
   if (f[1]+f[4]+f[7]==0){printf ("-1");return 0;}
       
   for (i=v.size();i>=0;i--)
    { 
       if (v[i]==1 || v[i]==4 || v[i]==7){v.erase(v.begin()+i);break;}
    }     
      for (i=0;i<v.size();i++)
       printf ("%d",v[i]);
 // return 0;
  }        
   //11
//3 9 9 6 4 3 6 4 9 6 0
 /*else 
  { 
   if (f[2]+f[5]+f[8]==0){printf ("-1");return 0;}
       
   for (i=v.size();i>=0;i--)
    { 
       if (v[i]==2 || v[i]==5 || v[i]==8){v.erase(v.begin()+i);break;}
    }     
      for (i=0;i<v.size();i++)
       printf ("%d",v[i]);
  //return 0;
  } */
system ("pause");
return 0; 
}
