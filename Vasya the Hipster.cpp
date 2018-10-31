#include<bits/stdc++.h>
using namespace std;
int a,b,mins,maks;
int main(){
    cin >> a >> b;
    mins = min(a,b);
    maks = max(a,b);
    cout << mins << " " <<  (maks-mins)/2;
}
