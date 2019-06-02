#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int ans[26] = {0,0,0,0,0,0,0,0,0,0,0,4,4,
				 4,4,4,4,4,4,4,15,4,0,0,0,0};
	int n;
	cin >> n;
	cout << ans[n] << endl;
}