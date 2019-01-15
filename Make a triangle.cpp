#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int jum = a+b+c;
    int maks = max(max(a,b),c);
    int ans = maks-(jum-maks)+1;
    if(ans<1) cout << 0 << endl;
    else cout << ans << endl;
}
