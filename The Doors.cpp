#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n,l,r,x;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> x;
		if(x==0)l=i;
		else r=i;
	}
	cout << (l<r ? l : r) << endl;
	return 0;
}