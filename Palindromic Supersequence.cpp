#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,temp;
    cin >> s;
    temp = s;
    reverse(temp.begin(),temp.end());
    cout << s << temp << endl;
}
