#include<bits/stdc++.h>
using namespace std;
int n,i,total;
int main(){
    cin >> n;
    int m =n;
    while(n--){
        cin >> i;
        total += i;
    }
    cout << (double)total/m;
}


