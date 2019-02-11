#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
bool isPrime(int a){
    for(int i=2; i<=sqrt(a); ++i){
        if(a%i==0 || a==4 || a==9){
            return false;
        }
    }
    return true;
}

int main(){
    cin >> n;
    cout << n << endl;
    for(int i=0; i<n; i++){
        cout << 1 << ' ';
    }
}
