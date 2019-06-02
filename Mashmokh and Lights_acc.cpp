#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,m;
	cin >> n >> m ;
	ll v[n+5];
	memset(v,0,sizeof(v));
	for(int i=0; i<m; i++){
		ll x,ans;
		cin >> x;
		ans = x;
		for(int j=x-1; j<n && v[j]<=0; j++){
            v[j]=ans;
		}
	}
	for(int i=0; i<n; i++){
		cout << v[i] << ' ' ;
	}

}

