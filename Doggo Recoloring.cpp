#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char,int> arr;
    bool ok = false;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        arr[x]++;
        if(arr[x]>=2) ok=true;
    }
    if(ok || n==1) cout << "Yes\n";
    else cout << "No\n";
}
