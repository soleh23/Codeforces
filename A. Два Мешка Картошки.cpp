#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;
const int INF=1000000000;
int n,m,i,j,k,l,c=1,v=0;
main()
{
  // freopen ("input.txt","r",stdin);
  // freopen ("output.txt","w",stdout);

    scanf ("%d%d%d",&n,&m,&k);

    i=n/m;
    i++;

     while (i*m<=k)
     {
        printf ("%d ",(m*i)-n);
        i++;
        v++;
     }
     if (v==0)printf ("-1");




return 0;
}
