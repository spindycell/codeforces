#include<bits/stdc++.h>
using namespace std;
string s;
int n;

int main(){
    cin >> s;
    int x = s.size();
    int i = 0;
    while(x--){
        if(s[i]>='A' && s[i]<='Z'){
            n++;
        }
        i++;
    }
    int m = s.size();
    if(n > m-n){
        transform(s.begin(),s.end(),s.begin(), :: toupper);
    } else {
        transform(s.begin(),s.end(),s.begin(), :: tolower);
    }
    cout << s << endl;
}
// pada soal ini jika uppercase > lowercase maka cout = kata uppercase
// sebaliknya jika lowercase > uppercase cout = kata lowercase
// itulah kenapa if ( uppercase > jumlahkata-upppercase) = kata uppercase


// cara cepat !! count_if tidak dapat digunakan dengan namespace std;
/*
#include <iostream>
#include <algorithm>
main(){std::string a;std::cin>>a;int u=count_if(a.begin(),a.end(),isupper);transform(a.begin(),a.end(),a.begin(),u>a.size()-u?toupper:tolower);std::cout<<a << "\n" << u << " " << a.size()-u;}
*/
