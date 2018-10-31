#include<bits/stdc++.h>
using namespace std;
bool color,BW;
int n,m;
int main(){
    char c;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> c;
            if(c=='C'|| c=='M' || c=='Y'){
                color = true;
            }
        }
    }
    if(color) cout << "#Color" <<endl;
    else cout << "#Black&White" <<endl;
}
