#include<bits/stdc++.h>
using namespace std;

int main(){
    int mins = INT_MAX,mins2= INT_MAX;
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;

    mins = min(min(k2,k5),k6);
    mins2 = min(k2-mins,k3);

    cout << 256*mins + 32*mins2 << endl;
}
