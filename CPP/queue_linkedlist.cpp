#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{

    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int val){
        node* n = new node(val);
        if(front == NULL){
            front = n;
            back = n;
            return;
        }
        else{
            while(back->next != NULL){
                back = back->next;
            }
            back->next = n;
            return;
        }
    }

    void pop(){
        if(front == NULL){
            cout << "No elements are left to pop" << endl;
        }
        else{
            node* todel = front;
            front = front->next;

            delete todel;
        }
        return;
    }

    int peek(){
        if(front == NULL){
            cout << "No element exist" << endl;
            return -1;
        }
        else{
            return front->data;
        }
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        else{
            return false;
        }
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