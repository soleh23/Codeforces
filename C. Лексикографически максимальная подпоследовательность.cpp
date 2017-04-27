#include<stdio.h>
#include<math.h>
#include <string.h>
#include<iostream>
using namespace std;
const int INF=1000000000;
int maxs=0,a[100001],i,j,k,l,c=0,n,m,v;
char s[100001];
main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
cin>>s;

 l=strlen(s);
  
  for (i=0;i<l;i++)
    a[s[i]-96]++;
    
    
    for(i=26;i>=1;i--)
     if (a[i]!=0){v=i;break;}
    
     
     for (i=0;i<l;i++)
      {
         if (s[i]-96==v && a[v]>0)
          {
            cout<<s[i];
            a[v]--;
          }
          else if (s[i]-96!=v) 
          {
            a[s[i]-96]--;
          }
          if (a[v]<=0)v--,i--;
      }
 
   
    
 
//system ("pause");
return 0; 
}
