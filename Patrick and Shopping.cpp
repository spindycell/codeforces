#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int mins = (a+b)*2;
    mins = min(a+b+c,mins);
    mins = min(mins,(a+c)*2);
    mins = min(mins,(b+c)*2);
    cout << mins << endl;
}
