#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
	char c;
	int u = 0, v = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j) {
            cin >> c;
            if (c == '*') {
                u ^= i;
                v ^= j;
            }
        }
	}

	cout << u << ' ' << v << endl;

	return 0;
}
