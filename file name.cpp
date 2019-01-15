#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,coun=0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        s[i]=='x' ? ans+=(++coun>2) : coun=0;
    }
    cout << ans << '\n';
}
