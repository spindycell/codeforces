#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,a;
    cin >> l >> r >> a;
    if(l<=r){
        l+=a;
        if(l>=r)
            cout << ((l+r)/2)*2;
        else
            cout << min(l,r)*2;
    } else {
        r+=a;
        if(r>=l)
            cout << ((l+r)/2)*2;
        else
            cout << min(l,r)*2;
    }
}
