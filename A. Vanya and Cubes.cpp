#include<bits/stdc++.h>
using namespace std;

int main(){
    string pakaiCoklat,pakaiSusu;
    cout << "Pakai Coklat : ";
    cin >> pakaiCoklat;
    cout << "Pakai Susu : ";
    cin >> pakaiSusu;

    if(pakaiCoklat=="YA"){
        cout << "Tambah Coklat" <<endl;
    }
    if(pakaiSusu=="YA"){
        cout << "Tambah Susus" <<endl;
    }
    if(pakaiCoklat != "YA" && pakaiSusu != "YA"){
        cout << "Tambah Keju" <<endl;
    }
    cout << "Tambah Gula" <<endl;
    cout << "Sajikan " <<endl;
}
