#include<bits/stdc++.h>
using namespace std;

int arr[305];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	int p,n,x;
	cin >> p >> n;	for(int i=1; i<=n; i++){
		cin >> x;
		arr[x%p]++;
		if(arr[x%p]>1){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}