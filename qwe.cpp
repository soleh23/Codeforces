#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<math.h>
using namespace std;
__int64 NOD(__int64 a, __int64 b)
{
    while (a*b!=0)
    {
        if (a>b) a%=b;
        else b%=a;
    }
    return a+b;
}
int main()
    {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    __int64 n, m, nd, x, y, l=0, r;
    cin >> n >> m >> x >> y;
    nd = NOD(x, y);
    x = x/nd; y = y/nd;
    r = min(n/x, m/y);
  //  cout << nd << " " << r << endl << endl;
    while (l<r)
    {
        int f = (l+r)/2;
        //cout << f << " " << endl;
        //cout << f*x << " " << f*y << endl;
        if (f*x<n && f*y<m)l=f+1;
        else r=f;
    }
    if (r*x>n || r*y>m) r--;
    cout << r*x << " " << r*y;
    return 0;
    }
