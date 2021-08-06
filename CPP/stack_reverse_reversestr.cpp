#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reversestr(string s){
    stack<string> st;
    stack<string> st2;
    for(int i=0; i<s.length(); i++){
        string w="";
        while(s[i]!=' ' && i<s.length()){
            w+=s[i];
            i++;
        }
        st.push(w);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    
}

void insertatend(stack<int> &st, int n){
    if(st.empty()){
        st.push(n);
        return;
    }
    int topn = st.top();
    st.pop();
    insertatend(st, n);

    st.push(topn);
    return;
}

void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }
    int n = st.top();
    st.pop();
    reverse(st);
    insertatend(st, n);
}

int main(){

    string s = "Om sai ram";
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}