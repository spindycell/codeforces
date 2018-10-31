#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=0,e=0,t=0,x=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='n')n++;
        if(s[i]=='e')e++;
        if(s[i]=='t')t++;
        if(s[i]=='i')x++;
    }
    int mins = min(x,t);
    n = n/3;
    e = e/3;

    mins = min(mins,n);
    mins = min(mins,e);
    cout << mins <<endl;
}
