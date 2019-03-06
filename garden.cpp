#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef ONLINE_JUDEGE
	// 	freopen("a.in","r",stdin);
	// 	freopen("a.out", "w",stdout);
	// #endif
	int n,k,ans,x;
	cin >> n >> k;
	int arr[n+5];
	ans = 10e17;
	for(int i=0; i<n; i++){
		cin >> x;
		if(k%x==0 && k/x<ans)
			ans = k/x;
	}
	cout << ans << endl;

}