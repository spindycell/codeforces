#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int lemon = c*d;
    int ans = min( (k*l)/nl,min(lemon,p/np));
    cout << ans/n << endl;
}
