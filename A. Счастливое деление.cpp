#include <stdio.h>         
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector> 
#include<string.h>
using namespace std;  
const int INF=-1000000000;
int l,i,j,c=0,n,a[15];
main()                                    
 {
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
scanf ("%d",&n);
a[1]=4;
a[2]=7;
a[3]=44;
a[4]=47;
a[5]=74;
a[6]=77;
a[7]=444;
a[8]=447;
a[9]=474;
a[10]=744;
a[11]=477;
a[12]=747;
a[13]=774;
a[14]=777;

for (i=1;i<=14;i++)
if (n%a[i]==0){printf ("YES");return 0;}
 
 printf ("NO");
// system ("pause");
 return 0;
}
