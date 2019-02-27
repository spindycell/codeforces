#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n;
    cin>>n;
    ll a=(ll)sqrt(n*2);

    if(n*2==a * (a+1)) cout<<"YES" << endl;
    else cout<< "NO" << endl;

    return 0;
}
