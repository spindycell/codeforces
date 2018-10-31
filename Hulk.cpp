#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << "I";
        if(i%2!=0){
            cout << " hate";
        } else{
            cout << " love";
        }
        if(i<n){
            cout << " that ";
        }
    }
    cout << " it";
}
