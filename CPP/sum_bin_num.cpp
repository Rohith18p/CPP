#include <iostream>
#include <cmath>

using namespace std;

int sumn(int n){
    n = n*(n+1)/2;
    return n;
}

int dectobin(int n){
    int i, r, p, b=0;
    int j = 0;
    int temp = n;
    while(temp>0){
        j += 1;
        temp /= 2;
    }
    for (i=0; i<j; i++){
        r = n%2;
        b = b + r*pow(10, i);
        n /= 2;
    }
    cout << endl;
    return b;
}

int bintodec(int n){
    int i, r, b=0;
    int j = 0;
    int temp = n;
    while(temp>0){
        j += 1;
        temp /= 10;
    }
    for (i=0; i<j; i++){
        r = n%10;
        b = b + r*pow(2,i);
        n /= 10;
    }
    return b;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int sum = bintodec(n1) + bintodec(n2);
    cout << dectobin(sum) << endl;
    cout << sum << endl;


    return 0;
}
