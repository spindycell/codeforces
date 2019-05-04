#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	int n,home=0,cts=0;
	string s,x;
	cin >> n >> s;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x.substr(0,3)==s) cts++;
		if(x.substr(5,3)==s) home++;
	}
	if(cts > home) cout << "contest\n";
	else cout << "home\n";

}