#include <bits/stdc++.h>
using namespace std;

int n,a,b,c,maks;

int main(){
    cin >> n >> a;
    for(int i=1; i<n; i++, a=b){
        cin >> b;
        maks = max(maks,(++c)*=(b>=a));
    }
    cout << maks+1;
}
