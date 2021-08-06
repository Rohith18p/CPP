#include <iostream>

using namespace std;

int tiles(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    return (tiles(n-1) + tiles(n-2));
}

int friendpair(int n){

    if(n==0 || n==1 || n==2){
        return n;
    }
    
    return friendpair(n-1) + ((n-1)*friendpair(n-2));
}

int main(){

    int n;
    cin >> n;
    cout << tiles(n) << endl;
    cout << friendpair(n) << endl;
    return 0;
}
