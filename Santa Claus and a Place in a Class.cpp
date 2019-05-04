#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
	int n,m,k,a,b;
	bool odd = false;
	cin >> n >> m >> k;
	
	if(k%2!=0) odd=true;

	int temp = m*2;
	if(k%temp!=0){
		a = k/temp+1;
		b = k%temp;
		if(odd)b+=1;
		b/=2;
	} else {
		a = k/temp;
		b =  m;
	}

	if(odd) cout << a << ' ' << b << ' ' << 'L' << endl;
	else cout << a << ' ' << b << ' ' << 'R' << endl;


}