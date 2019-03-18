#include<bits/stdc++.h>
#define f(x) str.find(x)
using namespace std;

string s,str="aeiou";

int main(){
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(f(s[i]) == -1 && s[i]!='n'){ //jika s[i] huruf konsonan dan bukan n
            if(f(s[i+1]) == -1){ //jika s[i+1] bukan vocal
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
