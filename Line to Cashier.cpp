#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif

	int n,sum=0,ans=0,mins=INT_MAX;
	cin >> n;
	int m[n+5];
	for(int i=0; i<n; i++){
		cin >> m[i];
	}
	for(int i=0; i<n; i++){
		sum = 0;
		for(int j=0; j<m[i]; j++){
			int temp;
			cin >> temp;
			sum+=temp;
		}
		ans = (sum*5)+(m[i]*15);
		mins = min(mins,ans);
	}
	cout << mins << endl;

}