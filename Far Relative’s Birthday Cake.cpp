#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    vector<int> c(n+5,0),r(n+5,0);
    string s;
    for (int i=0; i<n; i++){
		cin>>s;
		for (int j=0;j<n;j++){
		    if (s[j]=='C'){
		        ans+=c[i]+r[j];
		        c[i]++;
		        r[j]++;
		    }
		}
	}
	cout<< ans << endl;
	return 0;
}
