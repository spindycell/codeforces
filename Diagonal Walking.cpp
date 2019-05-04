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
		ans++;
		if(s[i]!=s[i+1]){
			i++;
		}
	}
	cout << ans << endl;
}