#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<vector>
#include<map>
#define LL long long int
using namespace std;
const int INF = 1000000009;
int n, m, k, t, tans = 0, casec = 1;
map<int,int>prct;
void primacity(){
  for (int i = 1; i <= 10000000; i++){
        int x = i, cur = 2, ans = 0, last = -1;
        while (cur * cur <= x){
            if (x % cur == 0){
                while (x % cur == 0 && cur * cur <= x)
                       x /= cur;

                last = cur;
                ans++;
            }
            else{
                if (cur == 2)cur++;
                else cur+=2;
            }
        }

    if (last != x)ans++;
    prct[i] = ans;

  }

}

main(){
     // freopen ("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
      primacity();

        scanf ("%d", &t);

          while (casec <= t){
            scanf ("%d%d%d", &n, &m, &k);
                  tans = 0;
            if (k < 9){
               for (int i = n; i <= m; i++)
                    if (prct[i] == k)tans++;
            }
            printf ("Case #%d: %d\n", casec, tans);

          casec++;
          }


    return 0;
}
