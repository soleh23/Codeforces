#include <stdio.h>         
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector> 
using namespace std;  
const int INF=-1000000000;
int j,i,f[1000001],p=1,m,n,c=0,v=1; 
vector <int >d;
bool pr(int x)
{
 if (x==2 || x==3 || x==5)return true;
 if (x%2==0 || x%3==0 ||x%5==0)return false;
 for (int i=3;i*i<=x;i+=2)
 if (x%i==0)return false;
 return true;
}    
bool per(int a)
{
   for (i=0;i<d.size()-1;i++)
    if (d[i]+d[i+1]+1==a)return true;
    return false;
}
main()                                    
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf("%d%d",&n,&m);
 
 for (i=2;i<=n;i++)
  if (pr(i))d.push_back(i);
        
for (j=0;j<d.size();j++)
    {
        if (per(d[j]))c++;
            if (c>=m)
            {
             printf ("YES");
             return 0;
            }
    }
         
  printf ("NO");
 //system ("pause");
 return 0;
}
