//spindyzel 2018//
#include<bits/stdc++.h>
using namespace std;

char s;
int main(){
    while(cin>>s){
        if(!strchr("AEIOUYaeiouy",s)){
            cout<<'.'<<(char)tolower(s);
        }
    }
}
