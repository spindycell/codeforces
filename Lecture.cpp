#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, m;
map< string, string > mp;
string a, b;

int main() {
	cin.sync_with_stdio(0);
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		cin >> a >> b;
		if(b.size() < a.size())
			mp[a] = b;
		else
			mp[a] = a;
	}
	for(int i = 0; i<n; i++) {
		cin >> a;
		cout << mp[a] << " ";
	}
	return 0;
}
