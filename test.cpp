#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	ll n,m;
	cin >> n >> m ;
	std::vector<ll> v(0,n+1);
	for(int i=0; i<m; i++){
		ll x,ans;
		cin >> x;
		ans = x;
		while(x<=n && v[x]==0){
			v[x]=ans;
			x++;
		}
	}
	cout << n << endl;
	for(int i=0; i<n; i++){
		cout << v[i] << ' ' ;
	}

}