#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int maks = max(a,b);
    maks = max(maks+maks-1,a+b);
    cout << maks << endl;
}
