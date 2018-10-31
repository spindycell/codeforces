#include<bits/stdc++.h>
using namespace std;
long long n,k;

bool isPrime(int number){
    for(int i=2; i<sqrt(number); ++i){
        if(number%i==0) return false;
    }
    return true;
}

int divisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}


int main(){
    cin >> n >> k;
    if(k==1) cout << 1 <<endl;
    else if(k==4){
        if(n<4) cout << 1 <<endl;
        else cout << 3 <<endl;
    }else if(isPrime(k) && k>n){
        cout << 0 <<endl;
    } else if(isPrime(k)){
        cout << 2 << endl;
    }else {
        if(k>n){
            cout << divisors(k) << " ";
            if(k/n % 2 == 0){
                cout << divisors(k) - k/n <<endl;
            } else {
                cout << divisors(k) - k/n - 1 << endl;
            }
        } else {
            cout << divisors(k) << endl;
        }
    }
}
