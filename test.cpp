#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, duaPangkatn=1;
    bool bisaDiMod=false;

    cin >> n >> m;

    for (int i=1; i<=n; i++){
        duaPangkatn*=2;
        if (m==duaPangkatn && i==n){
            cout << 0 << "\n";
            bisaDiMod=true;
            break;
        } else if (duaPangkatn>=m){
            cout << m << "\n";
            bisaDiMod=true;
            break;
        }
    }

    if (bisaDiMod==false){
        cout << m%duaPangkatn << "\n";
    }
}
