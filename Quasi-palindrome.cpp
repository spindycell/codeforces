#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
	if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin()))
		return true;
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	string s;
	cin >> s;
	while(s[0]=='0'){
		s.erase(0,1);
	}
	while(s[s.size()-1]=='0'){
		s.erase(s.size()-1,1);
	}

	cout << ( isPalindrom(s) ? "YES\n" : "NO\n");

}