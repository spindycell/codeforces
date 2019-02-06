#include<bits/stdc++.h>
using namespace std;

int euclid(int a,int b){
    if(b==0)
        return a;
    else return euclid(b,a%b);
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << c/(a*b/euclid(a,b)) <<endl;
}
