#include<bits/stdc++.h>
using namespace std;
int n,k,hasil,solved,batas;
int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        hasil += 5*i;
        batas = hasil+k+5*(i+1);
        solved++;
        if(batas>=240 || solved==n){
            cout << solved;
            return 0;
        }
    }
}
