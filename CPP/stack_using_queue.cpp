#include <iostream>
//#include <stack>
#include <queue>

using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
    int n;

    public:
    stack(){
        n=0;
    }

    void push(int val){
        q2.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }

        return;
    }

    void pop(){
        if(q1.empty()){
            cout << "No elements exists!" << endl;
            return;
        }
        q1.pop();
        return;
    }

    int top(){
        if(q1.empty()){
            cout << "No elements exists!" << endl;
            return -1;
        }
        else{
            return q1.front();
        }
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top()<< endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    return 0;
}