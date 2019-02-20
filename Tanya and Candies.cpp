#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,ganjil,genap;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        int idx = 1;
        ganjil=genap=0;
        for(int j=1; j<=n; j++){
            if(j!=i){
                if(idx%2==0) genap+=arr[j];
                else ganjil+=arr[j];
                idx++;
            }
        }
        if(ganjil == genap) ans++;
    }
    cout << ans <<endl;
}
