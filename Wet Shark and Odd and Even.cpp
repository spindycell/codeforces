#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,i=0,x;
    ll sum=0;
    ll minOdd = LLONG_MAX;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        if(x%2!=0 && x<minOdd){
            minOdd=x;
        }
        sum+=x;
    }
    if(sum%2!=0){
        sum-=minOdd;
    }
    cout << sum << endl;
}
