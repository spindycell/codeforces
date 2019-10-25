#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    while(n--){
        int x;
        cin >> x;
        for(int i=0; i<x; i++){
            cin >> s;
        }
        if(s.length() < 11){
            cout << "NO" << endl;
            return 0;
        }
        if(s.length() == 11 && s[0]=="8"){
            cout << "YES" << endl;
        }
        int temp = 0;
        temp = s.length() - 11;
        for(int i=0; i<temp; i++){
            if(s[i]=="8") {
                cout << "YES" << endl;
            }
        }
        cout << "NO" << endl;
        return 0;
    }

}
