#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    ll s,a,b,c;
    while(t--){
        cin >> s >> a >> b >> c;
        ll temp = ((s/c)/a) * b;
        cout << s/c + temp << endl;
    }
}
