#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s,ans;
    cin >> n;
    cin >> s;
    for(auto c:s){
        ans += c=='0'? "0":"";
    }
    cout << (s=="0" ? s:"1"+ans) << endl;
}
