#include<bits/stdc++.h>
using namespace std;
int n,ans;
int main(){
    cin >> n;
    while(n){
        if(n%2){
            ans++;
            n--;
            continue;
        }
        n/=2;
    }
    cout << ans <<endl;
    // __builtin_popcount(n);
}
