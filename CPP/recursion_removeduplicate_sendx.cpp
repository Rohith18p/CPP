#include <iostream>

using namespace std;

void removedup(string s){
    if(s.length()==0){
        return;
    }
    else{
        if(s[0]==s[1]){
            removedup(s.substr(1));
        }
        else{
            cout << s[0];
            removedup(s.substr(1));
        }
    }
}

string sendx(string s){
    if(s.length()==0){
        return "";
    }
    else{
        char el = s[0];
        string ans = sendx(s.substr(1));
        if(el=='x'){
            return ans+el;
        }
        else{
            return el+ans;
        }
    }
}

int main(){

    string s;
    cin >> s;

    removedup(s);
    cout << endl;
    cout << sendx(s) << endl;
    return 0;
}