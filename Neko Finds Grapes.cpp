#include<bits/stdc++.h>
using namespace std;

int n,m,x,ans;
int od1,od2,g1,g2;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x%2==1)od1++;
		else g1++;
	}
	for(int i=0; i<m; i++){
		cin >> x;
		if(x%2==1)od2++;
		else g2++;
	}
	
	ans = min(od1,g2) + min(od2,g1);
	cout << ans << endl;
	return 0;
}