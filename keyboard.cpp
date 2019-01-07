#include<bits/stdc++.h>
using namespace std;
char key[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
int main(){
    char shif;
    int idx=1;
    cin >> shif;
    if(shif=='R')idx=-1;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<30; j++){
            if(s[i]==key[j]){
                cout << key[j+idx];
                break;
            }
        }
    }
    cout << '\n';
}
