#include<bits/stdc++.h>
using namespace std;

int main(){
    int link=0,pearl=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='-') link++;
        else pearl++;
    }
    if(pearl==0 || link%pearl==0) puts("YES\n");
    else puts("NO\n");
}
