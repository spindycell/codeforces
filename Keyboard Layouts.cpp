#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,key,nani,ans;
    cin >> s >> key >> nani;
    for(int i=0; i<nani.length(); i++){
        char temp;
        bool isUp = false;
        if(isupper(nani[i]))
            isUp = true;
        temp = tolower(nani[i]);
        if(!isalpha(temp)) ans+=temp;
        for(int i=0; i<26; i++){
            if(temp==s[i]){
                if(isUp) ans+= toupper(key[i]);
                else ans+=key[i];
            }
        }
    }
    cout << ans <<endl;
}

/*
Alternative
#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	map<char,char> m;
	string s,t;
	cin>>s>>t;
	for(i=0;i<26;i++)
		m[s[i]]=t[i];
	cin>>s;
	for(i=0;i<s.length();i++){
		char c=s[i];
		if(islower(c)){
			s[i]=m[c];
		}
		else if(isupper(c)){
			c=tolower(c);
			s[i]=toupper(m[c]);
		}
	}
	cout<<s;
}
*/
