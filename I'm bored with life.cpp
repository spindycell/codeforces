#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll factorial(ll n){
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int main(){
    ll a,b,ans;
    cin >> a >> b;
    ans=min(a,b);
    cout << factorial(ans) <<endl;
}
