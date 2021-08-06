#include <iostream>
#include <cmath>

using namespace std;

int sum(int n){

    if(n == 0){
        return 0;
    }
    else{
        return (n + sum(n-1));
    }
}

int fact(int n){

    if(n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}

int npowp(int n, int p){
    if(p == 0){
        return 1;
    }
    else{
        return (n*npowp(n, p-1)); 
    }
}

int fib (int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1 + fib(n-1);
    }
    else{
        return fib(n-1)+fib(n-2);
    }

}

int checksort(int ar[], int n){
    if(n==0){
        return 1;
    }
    else{
        if(ar[n] > ar[n-1]){
            return (1*checksort(ar, n-1));
        }
        else{
            return 0;
        }
    }
}

int main(){

    int n, p;
    cin >> n >> p;

    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    cout << sum(n) << endl;
    cout << fact(n) << endl;
    cout << npowp(n, p) << endl;
    cout << fib(n) << endl;
    cout << checksort(ar, n-1) << endl;
    cout << printd(n) << endl;

    return 0;

}