#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool ok = false;
    cin >> n;
    while(n--){
        string s;
        int x,y;
        cin >> s >> x >> y;
        if(x>=2400 && y>x) ok=true;
    }
    if(ok) cout << "YES" <<endl;
    else cout << "NO" << endl;
}
