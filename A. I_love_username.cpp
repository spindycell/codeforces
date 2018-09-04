#include<bits/stdc++.h>
using namespace std;
int m,b,n,a,e;
int main(){
    cin >> n >> e;
    m = e;
    b = e;
    for(int i=1; i<n; i++){
        cin >> e;
        if(e>b){
            b=e;
            a++;
        }
        if(e<m){
            m = e;
            a++;
        }
    }
    cout << a << endl;
}
