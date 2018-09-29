#include<bits/stdc++.h>
using namespace std;
int n,k,x,hasil;
int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        if(5-x>=k){
            hasil++;
        }
    }
    cout << hasil/3;
}
