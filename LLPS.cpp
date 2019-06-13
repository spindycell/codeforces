#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("a.in","r",stdin);
		freopen("a.out","w",stdout);
	#endif

	string s;
	cin >> s;
	char largest='a';
    int ans = 0;
	for(int i=0; i<s.length(); i++){
        if(s[i]>largest){
            largest = s[i];
            ans = 0;
        }
        if(s[i]==largest)
            ans++;
	}
	for(int i=0; i<ans; i++)
        cout << largest;

    cout << endl;
}
