#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,ans=0;
    cin >> n >> m;
    int harga[n],uang[m];
    for(int i=0; i<n; i++){
        cin >> harga[i];
    }
    for(int i=0; i<m; i++){
        cin >> uang[i];
    }
    int k=0;
    for(int i=0; i<n && k<m; i++){
        if(harga[i]<=uang[k]){
            ans++;
            k++;
        }
    }
    cout << ans << endl;
}
