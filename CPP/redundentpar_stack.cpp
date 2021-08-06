#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int redundentpar(string s){
    stack<char> st;
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ')' ){
            if(st.top()=='+' || st.top()=='-' || st.top() == '*' || st.top()=='/' || st.top()=='^'){
                st.pop();
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    count++;
                }
            }
            else{
                count++;
            }
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]== '*' || s[i]=='/' || s[i]=='^' || s[i]=='('){
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout << "No redundent paranthesis" << endl;
        return 0;
    }
    else{
        return count;
    }
}

int main(){
    string s = "(((a+b)+c))";
    
    cout << "Number of redundent paranthesis: " << redundentpar(s) << endl;

    return 0;
}