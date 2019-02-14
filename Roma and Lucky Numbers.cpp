#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,ans=0;
    string s;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int temp = 0;
        cin >> s;
        for(int j=0; j<s.length(); j++){
            if(s[j]=='4' || s[j]=='7') temp++;
        }
        if(temp<=k)ans++;
    }
    cout << ans << endl;
}
