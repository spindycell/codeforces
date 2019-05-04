#include<bits/stdc++.h>
using namespace std;


int ze[5],on[5];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n,a,b;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		ze[a]++,on[b]++;
	}
	cout << min(ze[0],ze[1]) + min(on[0],on[1]) << endl;

}