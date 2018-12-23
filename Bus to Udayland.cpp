#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool found = false;
    cin >> n;
    char arr[n+1][6];
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(j!=2 && (arr[i][j]=='O' && arr[i][j-1]=='O') && found==false ){
               arr[i][j]='+',arr[i][j-1]='+';
               found = true;
            }
        }
    }
    if(!found) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++){
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }
}
