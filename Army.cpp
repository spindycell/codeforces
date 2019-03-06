#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDEGE
	// 	freopen("a.in","r",stdin);
	// 	freopen("a.out", "w",stdout);
	// #endif

	int n;
	cin >> n;
	int arr[n+5];
	for(int i=1; i<=n-1; i++){
		cin >> arr[i];
	}
	int a,b,ans=0;
	cin >> a >> b;
	for(int i=a; i<b; i++){
		ans += arr[i];
	}
	cout << ans << endl;

}