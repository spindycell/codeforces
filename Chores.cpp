#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("a.in","r",stdin);
		freopen("a.out","w",stdout);
	#endif

	int n,k,x;
	cin >> n >> k >> x;
	int arr[n+5];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr,arr+n,greater<int>());
	for(int i=0; i<k; i++){
		if(arr[i]>x)arr[i]=x;
	}
	int ans=0;
	for(int i=0; i<n; i++){
		ans+=arr[i];
	}
	cout << ans << endl;

}
