#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n,t;
	cin >> n >> t;
	int arr[n+5];
	for(int i=1; i<=n; i++){
		cin >> arr[i];
	}
	for(int i=1; i<=n; i++){
		int temp = 86400-arr[i];
		t-=temp;
		if(t<=0){
			cout << i << endl;
			return 0;
		}
	}
}