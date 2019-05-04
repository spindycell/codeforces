#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n;
	cin >> n;
	int arr[n+5];
	for(int i=0; i<n; i++){
		int x;
		cin >> x >> arr[i];
	}
	int q;
	cin >> q;
	for(int i=0; i<n; i++){
		if(q<=arr[i]){
			cout << n-i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}