#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans;
    bool ganjil=false;
    cin >> n >> m;
    int temp =abs(n-m);
    if(temp == 1){
        cout << 1 << endl;
        return 0;
    }
    if(temp%2==0) ans = temp/2;
    else {
        ans = temp/2 + 1;
        ganjil = true;
    }
    temp = ans;
    ans = (ans*(ans+1)/2);
    if(ganjil){
        cout << ans*2 - temp << endl;
    } else {
        cout << ans*2 << endl;
    }
}
