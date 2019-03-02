#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	// #ifndef ONLINE_JUDEGE
	// 	freopen("a.in","r",stdin);
	// 	freopen("a.out", "w",stdout);
	// #endif
	int n,a,b,c,x,y,z,cup,medal;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	cin >> n;
		
	cup = (a+b+c+4)/5; // ditambah 4 karena jika a+b+c%5 sisa maka akan ditambah satu dimana jika ditambah 4 maka otomatis a+b+c/5 akan ketambah 1 otomatis
	medal = (x+y+z+9)/10; // sama kayak ditambah 4 karena dibagi 10 maka ditambah 9

	if(cup+medal <= n)
		cout << "YES\n";
	else
		cout << "NO\n";	

}