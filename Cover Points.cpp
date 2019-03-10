#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,x,y,maks=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        maks = max(maks,x+y);
    }
    cout << maks << endl;

}
