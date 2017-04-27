#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
int n, m, a[10001];
using namespace std;
main()
{
   freopen ("input.txt", "r", stdin);
   freopen ("output.txt", "w", stdout);

   for (int i = 0; i <= 178; i++){
       for (int j = 0; j <= 178; j++){
            int k = 357-i-j;
            if (k < 179){
                printf ("%d %d %d\n", i, j, k);
                a[i] ++;
            }
       }
   }

   for (int i = 1; i < 179; i++)
       printf ("%d\n", a[i]);

  return 0;
}
