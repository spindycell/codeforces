#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	ll n,x,y;
	cin >> n >> x >> y;
	ll maks = max(x,y);
	ll mins = min(x,y);
	maks -= 1;
	mins = n - mins;
	if(maks > mins)
		cout << "Black\n";
	else
		cout << "White\n";
}