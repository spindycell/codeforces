#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,temp=3;
	cin >> n;
	bool ok = true;
	cin >> x;
	if(x==temp)ok=false;
	if(x==1)temp=2;
	else if(x==2)temp=1;
	for(int i=1; i<n; i++){
		cin >> x;
		if(x==temp)ok=false;
		if(x==1 && temp==2){
			temp=3;
		} else if(x==1 && temp==3){
			temp=2;
		} else if(x==3 && temp==1){
			temp=2;
		} else if(x==3 && temp==2){
			temp=1;
		} else if(x==2 && temp==1){
			temp=3;
		} else if(x==2 && temp==3){
			temp=1;
		}
	}
	cout << (ok ? "YES\n" : "NO\n");
}

