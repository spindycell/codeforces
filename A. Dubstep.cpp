#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	regex p("WUB"); //regex mencari string yang dicari
	cout << regex_replace(s, p, " "); // keluaran mereplace p menjadi spasi
    // jawaban benar tapi dicompail error
    return 0;
}
