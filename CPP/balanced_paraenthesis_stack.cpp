#include <iostream>
#include <stack>
#include <math.h>
#include <algorithm>


using namespace std;

bool balancedpar(string s){

    stack<char> st;
    int l = s.length();
    int i;
    for(i=0; i<l/2; i++){
        st.push(s[i]);
    }

    while(i<l){
        if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
        i++;
    }
    if(st.empty()){
        return true;
    }
}

int main(){

    cout << balancedpar("{[()]}") << endl;
    cout << balancedpar("{[()}]") << endl;
    return 0;
}