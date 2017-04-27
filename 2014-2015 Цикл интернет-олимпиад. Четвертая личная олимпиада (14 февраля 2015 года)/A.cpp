#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
const int INF = 1e9 + 9, N = 1e5 + 10;
int n, m, a[N], b[N], r[N];
struct glob{
 int ind, val;
 bool type;
};
stack<glob>st;

void intro() {
 scanf ("%d%d", &n, &m);
       for (int i = 1; i <= n; i++)
           scanf ("%d", &a[i]);
       for (int j = 1; j <= m; j++)
           scanf ("%d", &b[j]);
}
void body(){
int i = 1, j = 1;
glob x;
    while (i <= n || j <= m){
          if ((j > m || a[i] <= b[j]) && i <= n){
                x.val = a[i];
                x.ind = i;
                x.type = false;
                i++;
          }
          else{
                x.val = a[j];
                x.ind = j;
                x.type = true;
                j++;
          }

          if (!st.empty() && !st.top().type && x.type){
              r[st.top().ind] = x.ind;
              st.pop();
          }
          else st.push(x);

    }
}
void concl(){
     for (int i = 1; i <= n; i++){
         if (!r[i])r[i] = -1;
            printf ("%d\n", r[i]);
     }
}
main()
{
  freopen ("ant.in", "r", stdin);
  freopen ("ant.out", "w", stdout);

    intro();
     body();
     concl();

 return 0;
}
