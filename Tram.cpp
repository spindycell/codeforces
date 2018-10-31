#include <iostream>
using namespace std;


int main(){
    int n,maks=0,a,b,temp=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        temp=temp-a+b; // temp - a + b
        if(temp>maks){
            maks=temp;
        }
    }
    cout << endl << maks;

    return 0;
}
