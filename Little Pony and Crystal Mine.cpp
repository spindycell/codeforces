#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(abs(n/2-j)<=min(i,n-i-1))
                cout<<"D";
            else
                cout << '*';
        }
        cout <<endl;
    }

}
