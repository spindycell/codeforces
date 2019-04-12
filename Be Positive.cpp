#include<bits/stdc++.h>
using namespace std;

int n,x,y,ok,bagi;

int main(){
    cin >> n;
    bagi = n/2+(n%2);
    for(int i=0; i<n; i++){
        cin >> x;
        if(x>0)ok++;
        else if(x<0)y++;
    }
    if(y>ok){
        cout << (y>=bagi? -1 : 0) << endl;
    } else {
        cout << (ok>=bagi? ok : 0) << endl;
    }
}
