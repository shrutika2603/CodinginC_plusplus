#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int hash[256] = {0};
    for (int i=0; i<s.size(); i++){
        hash[s[i]-'a']+=1;
    }
    for(int i=0; i<26; i++){
        cout << char('a' + i) << ": " << hash[i] << endl;
    }
}