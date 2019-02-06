#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y,ans=0;
    cin >> n >> m;
    vector<int> arr(m+1,0);
    for(int i=0; i<n; i++){
        cin >> x;
        for(int j=0; j<x; j++){
            cin >> y;
            if(arr[y]==0) ans++;
            arr[y]++;
        }
    }
    cout << (ans>=m ? "YES\n" : "NO\n");
}
