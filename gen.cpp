#include<stdio.h>
#include<iostream>
using namespace std;
int main ()
         {
         freopen ("input.txt","w",stdout);
         int n = 1000 , m = 1000;
         cout << "1000 1000 500000\n";
         for (int i=0; i<n; i++)
             {
             for (int j=0; j<m; j++)
                 cout << 1000 <<" ";
             cout << endl;
             }
         for (int i=0; i<500000; i++)
             cout << "r 3 2\n";
         return 0;
         }
