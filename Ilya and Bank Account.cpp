#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    cout << max(n,max(n/10,(n/100)*10+n%10));
}

//cara bego
/*
#include<bits/stdc++.h>
using namespace std;

string n;

int main(){
    cin >> n;
    int a = n.length();
    if(n[0]=='-' && a==3){
        if(n[2]=='0'){
            cout << n[2];
        }else {
            if(n[1]>n[2]){
                cout <<n[0] << n[2];
            } else {
                cout <<n[0] << n[1];
            }
        }
    } else if (n[0]=='-') {
        if(n[a-2]>n[a-1]){
            n[a-2] = n[a-1];
        }
        for(int i=0; i<a-1; i++){
            cout << n[i];
        }
    }
    else {
        for(int i=0; i<a; i++){
            cout << n[i];
        }
    }

}
*/
