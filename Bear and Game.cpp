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
		cin >> arr[i];
	}
	int now=0,ans=0;
	for(int i=0; i<n; i++){
		if(arr[i]-now>15){
			ans = now+15;
			break;
		} else {
			now = arr[i];
			ans = now+15;
		}
	}
	if(ans>90) ans=90;
	cout << ans << endl;

}