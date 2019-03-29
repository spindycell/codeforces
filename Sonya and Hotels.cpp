#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,ans=0;
    cin >> n >> m;
    ll arr[n+5];
    set<ll> lis;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        lis.insert(arr[i]-m);
        lis.insert(arr[i]+m);
    }
    for(auto i:lis){
        bool ok = true;
        for(int j=0; j<n; j++){
            if(abs(arr[j]-i)<m){
                ok = false;
                break;
            }
        }
        if(ok)ans++;
    }
    cout << ans <<endl;
}
