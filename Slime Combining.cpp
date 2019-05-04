#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 30; i >= 0; i--) {
    if(n & (1 << i)) {
      printf("%d ", i + 1);
    }
  }
  return 0;
}

/*
int main() {
  int n;
  scanf("%d", &n);
  for(int i = 30; i >= 0; i--) {
    if(n & (1 << i)) {
      printf("%d ", i + 1);
    }
  }
  return 0;
}
*/
