#include <iostream>
#include <stack>

using namespace std;

# define n 100


class queue{

    stack<int> st1;
    stack<int> st2;

    public:

    void push(int val){
        st1.push(val);
        return;
    }

    void pop(){
        if(st1.empty()){
            cout << "No elements in the queue!" << endl;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            st2.pop();
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
        return;
    }

    int peek(){
        int res;
        if(st1.empty()){
            cout << "No elements in the queue!" << endl;
            return -1;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            res = st2.top();
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
        }
        return res;
    }

    bool empty(){
        return st1.empty();
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    return 0;
}