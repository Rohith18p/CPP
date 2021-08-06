#include <iostream>

using namespace std;

class enc{
    public:
    int a;
    void funa(){
        cout << "Function A " << endl;
    }
    private:
    int b;
    void funb(){
        cout << "Function B " << endl;
    }
    protected:
    int c;
    void func(){
        cout << "Function C " << endl;
    }
};

int main(){

    enc a;
    a.func();
    return 0;
}