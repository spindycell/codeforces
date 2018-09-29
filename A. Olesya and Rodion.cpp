#include<bits/stdc++.h>
using namespace std;
int n,t;
int main(){
    cin >> n >> t;
    if(n==1 && t>9){
        cout << "-1" <<endl;
    } else {
        cout <<t;
        if(t==10) n--;
        for(int i=1; i<n; i++){
            cout << 0;
        }
        cout << endl;
    }
}
