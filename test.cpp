#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll euclid(ll a,ll b){
    if(b==0)
        return a;
    else
        return euclid(b,a%b);
}


int main(){
    ll a,b;
    cin >> a,b;
    cout << euclid(a,b) << endl;
}
