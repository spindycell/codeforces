#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	int d,m;
	int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> m >> d;
	d-=1;
	int ans = ( (d+arr[m])/7 );
	if((d+arr[m])%7!=0) ans++;
	cout << ans << endl;
}