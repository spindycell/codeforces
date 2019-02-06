#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    if(n%2==0){
        ans = n*(n/2);
    } else {
        ans = n*(n/2)+((n/2)+1);
    }
    cout << ans <<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( (i%2==0 && j%2==0) || (i%2==1 && j%2==1) ){
                cout << 'C';
            }
            else
                cout << '.';
        }
        cout <<endl;
    }
}
