#include<bits/stdc++.h>
using namespace std;

int maju(char dari,char ke){
    int hasil=0;
    for(int i=0; i<=26; i++){
        if(dari==ke) return hasil;
        else hasil++;
        if((char)dari=='z'){
            dari = 'a';
        } else dari++;

    }
}
int mundur(char dari,char ke){
    int hasil=0;
    for(int i=0; i<=26; i++){
        if(dari==ke) return hasil;
        else hasil++;
        if((char)dari=='a'){
            dari = 'z';
        } else dari--;
    }
}

int main(){
    int ans = 0,kanan,kiri;
    string s;
    cin >> s;
    kanan = maju('a',s[0]);
    kiri = mundur('a',s[0]);
    ans += min(kanan,kiri);
    for(int i=0; i<(int)s.length()-1; i++){
        kanan = maju(s[i],s[i+1]);
        kiri = mundur(s[i],s[i+1]);
        ans += min(kanan,kiri);
    }
    cout << ans << endl;

}
