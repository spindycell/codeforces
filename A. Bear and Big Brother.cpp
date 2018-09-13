#include<iostream>
using namespace std;
int a,b,jumlah=1;

int hasil(int jumlah,int a,int b){
    a = a*3;
    b = b*2;
    if(a>b){
        return jumlah;
    } else {
        jumlah++;
        return hasil(jumlah,a,b);
    }
}
int main(){
    cin >> a >> b;
    cout << hasil(jumlah,a,b);
}
