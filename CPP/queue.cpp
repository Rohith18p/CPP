#include <iostream>

using namespace std;

#define n 100

class queue{

    int* arr;
    int f;
    int b;

    public:
    queue(){
        arr = new int[n];
        f = -1;
        b = -1;
    }

    void push(int x){
        if(f==-1){
            f++;
        }
        b++;
        arr[b] = x;
        return;
    }

    void pop(){
        if(f==-1 || f>b){
            cout << "No elements exists!!!" << endl;
            return;
        }
        else{
            f++;
        }

    }

    int peek(){

        if(f==-1 || f>b){
            cout << "No elements exists!!!" << endl;
            return -1;
        }
        return arr[f];     
    }

    bool empty(){
        if((f==-1)||f>b){
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