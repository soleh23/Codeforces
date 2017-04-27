#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
#include<vector>
#include<map>
#include<string.h>
#define LL long long int
using namespace std;
const int INF = 1e9 + 7;
int n, m, k, t, tans = 0, casec = 0, bord, d[2010][2010], ind, tenpow, i;
char s[105][20];
bool OKsfree(int x, int y){
     if (x > y)return true;
     return false;
}
bool OKsfull(int x, int y){
    if (x <= y)return true;
    return false;
}
main(){
     // freopen ("input.txt", "r", stdin); freopen ("output.txt", "w", stdout);
      scanf ("%d", &t);
      while (casec < t){
            scanf ("%s", s[casec]);

                i = 0;
                for (;;){
                    if (s[casec][i] == '-'){
                        bord = i;
                        break;
                    }++i;
                }

                    n = m = 0;
                    ind = bord - 1;
                    tenpow = 1;
                    while (ind >= 0){
                          n += tenpow * (s[casec][ind] - 48);
                          tenpow *= 10;
                          ind--;
                    }

                    ind = strlen (s[casec]) - 1;
                    tenpow = 1;
                    while (ind > bord){
                          m += tenpow * (s[casec][ind] - 48);
                          tenpow *= 10;
                          ind--;
                    }

                        for (int i = 0; i <= n; i++)
                            for (int j = 0; j <= m; j++)
                                d[i][j] = 0;

                        d[0][0] = d[1][0] = 1;
                        for (int i = 0; i <= n; i++){
                            for (int j = 0; j <= m; j++){
                                if (OKsfree(i, j)){
                                    if (i - 1 >= 0 && OKsfree(i - 1, j))d[i][j] += d[i-1][j] % INF;
                                    if (j - 1 >= 0 && OKsfree(i, j - 1))d[i][j] += d[i][j-1] % INF;
                                    d[i][j] %= INF;
                                }
                                else if (OKsfull(i, j)){
                                    if (i - 1 >= 0 && OKsfull(i - 1, j))d[i][j] += d[i-1][j] % INF;
                                    if (j - 1 >= 0 && OKsfull(i, j - 1))d[i][j] += d[i][j-1] % INF;
                                    d[i][j] %= INF;
                                }
                            }
                        }

                        printf ("Case #%d: %d %d\n", casec + 1, d[n][m], d[m][m]);

        casec++;
      }


    return 0;
}
