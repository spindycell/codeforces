#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	string s;
	cin >> s;
	int n = s.length();
	int a=0;
	for(int i=0; i<n; i++){
		if(s[i]=='a')a++;
	}
	int half = n/2+1;
	if(a>=half) cout << n << endl;
	else cout << a*2-1 << endl;
}