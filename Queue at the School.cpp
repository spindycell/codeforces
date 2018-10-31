#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    char m[n];
    cin >> m;

    while(x--){
        for(int i=0; i<n-1;i++){
            if(m[i]=='B' && m[i+1]=='G'){
                swap(m[i],m[i+1]),i++;
            }
        }
    }
    cout << m;


    cout << endl;
    return 0;
}
