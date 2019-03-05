#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number==4 || number==9) return false;
    for(int i=2; i<=sqrt(number); ++i){
        if(number%i==0)
            return false;
    }
    return true;
}

int main(){
    int n,m;
    bool nope=false;
    cin >> n >> m;
    if(!isPrime(m)) cout << "NO\n";
    else {
        for(int i=n+1; i<m; i++){
            if(isPrime(i)){
                nope = true;
                break;
            }
        }
        if(nope) cout << "NO\n";
        else cout << "YES\n";
    }
}
