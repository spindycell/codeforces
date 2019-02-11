#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m;
    cin >> n >> m;
    if(m%n==0) cout << m/n <<endl;
    else cout << m/n+1 <<endl;
}
