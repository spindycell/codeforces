#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=1,i=0;
    string s;
    cin >> n >> s;
    while(s[i]=='1'){
        ans++;
        i++;
    }
    if(ans>n)ans=n;
    cout << ans << endl;
}
