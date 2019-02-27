#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,t1,t2,t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    int lewatTangga = abs(x-y) * t1;
    int elevator = (abs(x-z) + abs(x-y)) * t2 + (t3*3) ;

    if(elevator<=lewatTangga) cout << "YES" << endl;
    else cout << "NO" << endl;
}
