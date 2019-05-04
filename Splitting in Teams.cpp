#include<bits/stdc++.h>
using namespace std;

int arr[5];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("./a.in","r",stdin);
		freopen("./a.out","w",stdout);
	#endif
		int n,x,ans;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x;
			arr[x]++;
		}
		int a=arr[1],b=arr[2];
		if(a<=b)
			ans=a;
		else if(a>b)
			ans=b + ((a-b)/3);
		cout << ans << endl;
}