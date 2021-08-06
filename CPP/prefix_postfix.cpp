#include <iostream>
#include <stack>
#include <string>
#include <math.h>

using namespace std;

int prefix(string s){

    stack<int> st;
    int l = s.length();
    for(int i=l-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i] - '0');
        }
        else{
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break; 
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1,op2));
            }
        }
    }
    return st.top();
}

int postfix(string s){

    stack<int> st2;
    int l = s.length();
    for(int i=0; i<l; i++){
        if(s[i]>='0' && s[i]<='9'){
            st2.push(s[i] - '0');
        }
        else{
            int op2 = st2.top();
            st2.pop();
            int op1 = st2.top();
            st2.pop();

            switch (s[i])
            {
            case '+':
                st2.push(op1 + op2);
                break; 
            case '-':
                st2.push(op1 - op2);
                break;
            case '*':
                st2.push(op1 * op2);
                break;
            case '/':
                st2.push(op1 / op2);
                break;
            case '^':
                st2.push(pow(op1,op2));
            }
        }
    }
    return st2.top();
}

int main(){

    cout << prefix("-+7*45+20") << endl;
    cout << postfix("745*+20+-") << endl;
    return 0;
}