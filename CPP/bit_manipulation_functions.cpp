#include <iostream>

using namespace std;

int getbit(int n, int i){
    return ((n & (1<<i)) != 0);
}

int setbit(int n, int i){
    return (n | (1<<i));
}

int clearbit(int n, int i){
    return (n & ~(1<<i));
}

int updatebit(int n, int i, int v){
    n = (n & ~(1<<i));
    return (n | v<<i);
}
int main(){

    int n, i, v;
    cin >> n >> i >> v;

    cout << getbit(n, i) << endl;
    cout << setbit(n, i) << endl;
    cout << clearbit(n, i) << endl;
    cout << updatebit(n, i, v) << endl;
    return 0;
}