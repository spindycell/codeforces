#include<bits/stdc++.h>
using namespace std;



int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n,ans=0;
	string s;
	cin >> n >> s;
	for(int i=0; i<n; i++){
		int temp = s[i] - '0';
		if(temp%2==0){
			ans += i+1;
		}
	}
	cout << ans <<endl;
	return 0;
}