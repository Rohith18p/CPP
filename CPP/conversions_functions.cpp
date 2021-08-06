#include <iostream>
#include <cmath>

using namespace std;

int sumn(int n){
    n = n*(n+1)/2;
    return n;
}

int dectobin(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%2;
        b = b + r*p;
        p *= 10;
        n /= 2;
    }
    return b;
}

int bintodec(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%10;
        b = b + r*p;
        p *= 2;
        n /= 10;
    }
    return b;
}

int dectooct(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%8;
        b = b + r*p;
        p *= 10;
        n /= 8;
    }
    return b;
}

int octtodec(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%10;
        b = b + r*p;
        p *= 8;
        n /= 10;
    }
    return b;
}

int dectohex(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%16;
        b = b + r*p;
        p *= 10;
        n /= 16;
    }
    return b;
}

int hextodec(int n){
    int r, p=1, b=0;
    while(n>0){
        r = n%10;
        b = b + r*p;
        p *= 16;
        n /= 10;
    }
    return b;
}

int main(){
    int n;
    cin >> n;
    cout << dectobin(n) << endl;
    cout << dectooct(n) << endl;
    cout << dectohex(n) << endl;
    cout << bintodec(n) << endl;
    cout << octtodec(n) << endl;
    cout << hextodec(n) << endl; 

    return 0;
}
