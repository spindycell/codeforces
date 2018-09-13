#include<bits/stdc++.h>
using namespace std;

map < string,int > nama;
int n;
string s;

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(nama[s]++){
            cout<<s<<nama[s]-1;
        } else{
            cout<<"OK";
        }
        cout<<endl;
    }
}
