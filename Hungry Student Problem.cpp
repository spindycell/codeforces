#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int x;
    scanf("%d", &x);
    bool ok = 0;
    for (int i = 0; i <= x; i += 7) {
      if ((x-i) % 3) continue;
      else {
        ok = 1;
        break;
      }
    }
    puts(ok ? "YES" : "NO");
  }

  return 0;
}
/*

#include <bits/stdc++.h>
using namespace std;

const int N = 105;

bool can[N];

int main() {
  can[0] = 1;
  for (int i = 0; i < N; i++) {
    if (!can[i]) continue;
    if (i + 3 < N) can[i + 3] = 1;
    if (i + 7 < N) can[i + 7] = 1;
  }
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    puts(can[n]? "YES" : "NO");
  }

  return 0;
}

*/
