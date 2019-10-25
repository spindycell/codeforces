#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int ans[] = {6,8,4,2};
    if (n == 0) puts("1");
    else printf("%d\n", ans[n%4]);
    return 0;
}
