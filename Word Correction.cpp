#include<bits/stdc++.h>
#define f(x) str.find(x)
using namespace std;

string str = "aeiouy";

int main(){
    int n;
    string ans="";
    bool vowels = false;
    cin >> n;
    for(int i=0; i<n; i++){
        char x;
        cin >> x;
        if(vowels==true && f(x)!=-1){
            continue;
        } else {
            ans+=x;
        }
        if(f(x)!=-1) vowels = true;
        else vowels = false;
    }
    cout << ans <<endl;
}
