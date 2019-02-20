#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k,t,ans;
    cin >> n >> k >> t;
    if(t<k) ans = t;
    else if(t>n) ans = (n+k)-t;
    else ans = k;
    cout << ans <<endl;
}
