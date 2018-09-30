#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int n,m,hired,kasus;

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        if(m>0){
            hired += m;
        } else if(m<0 && hired>0){
            hired--;
        } else {
            kasus++;
        }
    }
    cout << kasus <<endl;
}
