#include<bits/stdc++.h>
using namespace std;
int n,sum,a;
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>a;
			if (i==(n-1)/2 || j==(n-1)/2 || i==j || i+j==n-1)  sum+=a;
		}
	}
	cout<<sum<<'\n';
}
