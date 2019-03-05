#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define FOR(i,a,b) for( i=a; i<=b; i++)
#define FORS(i,n) FOR(i, 0, n-1)

int n, i, x, a, sum, ans;

int main(){

    sf("%d %d", &n, &x);
    FORS(i,n) {
		sf("%d", &a);
		sum += a;
	}
    sum = abs(sum);
    cout << (sum + x - 1) / x << "\n";
	return 0;

}
