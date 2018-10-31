#include<bits/stdc++.h>
using namespace std;

long long n,a,x,i,m[100005];

main(){

	cin>>n;

	while(i<n){
		cin>>a;
		m[a]+=a;
		i++;
	}
	i=2;

	while(i<100005){
		m[i]=max(m[i-1],m[i]+m[i-2]);
		i++;
	}
	cout<<m[i-1];

	return 0;
}
