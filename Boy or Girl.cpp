// jangan langsung di submit karena bakalan wrong answer
#include<bits/stdc++.h>
using namespace std;

char c;
set<char> s;

int main(){
    while(cin>>c && c!='0'){
        s.insert(c); // menginsert char c ke dalam set char s;
    }
    cout << (((s.size())%2)?"IGNORE HIM!":"CHAT WITH HER!"); //jika genap/ya maka bagian kanan di cout (chat with her)
    cout << endl << s.size(); //s.size menunukkan jumlah jenis huruf yang ada pada sebuah string bukan jumlah huruf yang ada seperti .length
}
