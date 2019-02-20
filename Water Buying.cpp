#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        ll k,a,b,ans=0;
        cin >> k >> a >> b;
        if(b<a*2){
            ans = ((k/2)*b)+(a*(k%2));
        } else {
            ans = k*a;
        }
        cout << ans <<endl;
    }
}
