#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,x,sum=0,ans=0;
    cin >> n;
    priority_queue<ll> cans;
    for(int i=0; i<n; i++){
        cin >> x;
        sum+=x;
    }
    for(int i=0; i<n; i++){
        cin >> x;
        cans.push(x);
    }

    ans += cans.top();
    cans.pop();
    ans += cans.top();

    if(ans >= sum) cout << "YES\n";
    else cout << "NO\n";
}

/*
ll x,sum=0,n,maks=0,maks2=0;
cin >> n;
for(int i=0; i<n; i++){
    cin >> x;
    sum+=x;
}
for(int i=0; i<n; i++){
    cin >> x;
    if(x>maks){
        maks2 = maks;
        maks = x;
    }
    else if(x<=maks && x>maks2) maks2 = x;
}
//cout << maks << ' ' << maks2 << endl;
if(sum<=maks+maks2) cout << "YES\n";
else cout << "NO\n";
*/
