#include <bits/stdc++.h>
using namespace std;
int a,b,c,k,hasil;
int main(){
    cin >> k;
    while(k--){
        cin >> a >> b >> c;
        if(a+b+c>1){
            hasil++;
        }
    }
    cout << hasil;
}
