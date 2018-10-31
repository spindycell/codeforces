#include<bits/stdc++.h>
using namespace std;

char s[101];
int i,j;

int main(){
    cin >> s;
    for(i = 0; s[i]; i+=2){
        for(j=i; s[j]; j+=2){
            if(s[i]>s[j]){
                s[i]^=s[j]^=s[i]^=s[j];
            }
        }

    }
    puts(s);
}
