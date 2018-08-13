#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    set<char> a;
    cin >> c;
    while(c!='}'){
        cin >> c;
        if(c!=','){
            a.insert(c);
        }
    }
    cout << a.size()-1;
}
