#include <iostream>

using namespace std;

void reverse1(string st, int n){
    if(n==0){
        cout << st[0];
        return;
    }
    else{
        cout << st[n];
        reverse1(st, n-1);
    }
}

void reverse2(string s){
    if(s.length() == 0){
        return;
    }
    else{
        string remstr = s.substr(1);
        reverse2(remstr);
        cout << s[0];
    }
}

void replacepi(string s){
    if(s.length()==0){
        return;
    }
    else{
        if(s[0] == 'p' && s[1] == 'i'){
            cout << "3.14";
            replacepi(s.substr(2));
        }
        else{
            cout << s[0];
            replacepi(s.substr(1));
        }
    }
}

int main(){
    string st;
    cin >> st;

    int i=0;
    int n = st.length();
    reverse1(st, n-1);
    cout << endl; 
    reverse2(st);
    cout << endl;
    replacepi(st);


    return 0;
}