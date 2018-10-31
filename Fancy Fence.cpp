#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout<<(360%(180-n)?"NO\n":"YES\n");
    }
}
