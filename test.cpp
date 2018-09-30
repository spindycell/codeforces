#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char x;
    int n;
    cin >> s;
    cin >> n;
    while(n--){
        cin >> x;
        cout << x << " : " << count(s.begin(),s.end(), x) <<endl;
    }
}
