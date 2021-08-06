#include <iostream>
#include <cmath>

using namespace std;

void dec(int n){
    if(n==1){
        cout << "1 ";
        return;
    }
    else{
        cout << n << " ";
        dec(n-1);
    }
    
}

void inc(int n){
    if (n==1){
        cout << "1 ";
        return;
    }
    else{
        inc(n-1);
        cout << n << " ";
    }
}

int firsto(int ar[], int n, int i, int j){
    if(j<n){
        if(ar[j]==i){
            return j+1;
        }
        else{
            return firsto(ar, n, i, j+1);
        }
    }
    else{
        return -1;
    }
}

int lasto(int ar[], int n, int i){
    if(n>=0){
        if(ar[n]==i){
            return n+1;
        }
        else{
            return lasto(ar, n-1, i);
        }
    }
    else{
        return -1;
    }
}

int main(){

    int n, i, j=0;
    cin >> n >> i;

    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    dec(n);
    cout << endl;
    inc(n);
    cout << endl;
    cout << firsto(ar, n, i, j) << endl;
    cout << lasto(ar, n, i) << endl;
    return 0;
}