#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long maks=0,arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maks = max(maks,arr[i]);
    }
    if(maks>=25)
        cout << maks-25 << endl;
    else
        cout << 0 << endl;
}
