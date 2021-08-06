#include <iostream>
#include <stack>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int prec(char c){
    if(c == '^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string intopost(string s){

    stack<char> st;
    string res="";
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res += s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && (prec(st.top()) > prec(s[i]))){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    return res;
}

string intopre(string s){

    string temp = "";
    string ans = "";
    //reverse(s.begin(), s.end());
    for(int i=s.length()-1; i>=0; i--){
        if(s[i]==')'){
            temp += '(';
        }
        else if(s[i] == '('){
            temp += ')';
        }
        else{
            temp += s[i];
        }
    }
    temp = intopost(temp);
    for(int i=temp.length()-1; i>=0; i--){
        ans += temp[i];
    }

    return ans;
}
int main(){

    //cout << intopost("a*b+c") << endl;
    cout << intopre("a*b+c") << endl;
    return 0;
}