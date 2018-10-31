#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
    ll n;
    ll nol=0,satu=0;
    cin >> n;
    char c;
    for(int i=0; i<n; i++){
        cin >> c;
        if(c=='0')nol++;
        else satu++;
    }
    ll mins = min(nol,satu);
    if(nol==0 || satu==0) cout << n <<endl;
    else cout << n-(mins*2) <<endl;
}
