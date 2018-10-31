#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b,c;
	cin>>a>>b>>c;
	a+=b;   //menggabungkan 2 string
	sort(a.begin(),a.end()); // mengurutkan huruf dari a sampai z
	sort(c.begin(),c.end());
	if(a==c)cout<<"YES";
	else cout<<"NO";
}
