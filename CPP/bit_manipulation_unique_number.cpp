#include <iostream>

using namespace std;

int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setbit(int n, int i){
    return (n | (1<<i));
}

int unique(int ar[], int n){
    int xors = 0;
    for(int i=0; i<n; i++){
        xors = xors^ar[i];
    }
    return xors;
}

int unique2(int ar[], int n){
    int xors = 0;
    for(int i=0; i<n; i++){
        xors = xors^ar[i];
    }
    int tempxor = xors;
    int pos = 0;
    int setb = 0;

    while(setb!=1){
        setb = xors & 1;
        pos += 1;
        xors = xors >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++){
        if(getbit(ar[i], pos-1)){
            newxor = newxor^ar[i];
        }
    }

    cout << newxor << endl;
    cout << (newxor^tempxor) << endl;

}

int unique3(int ar[], int n){
    int res = 0;
    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(getbit(ar[j], i)){
                sum += 1;
            }
        }
        if(sum%3 != 0){
            res = setbit(res, i);
        }
    }
    return res;
}

int main(){

    int n, r;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    /* for unique number
    const int N = 1e6;
    int ar1[N];
    for(int i=0; i<N; i++){
        ar1[i] = 0;
    }

    for(int i=0; i<n; i++){
        ar1[ar[i]] += 1;
    }

    cout << endl;
    for(int i=0; i<N; i++){
        if(ar1[i]==1){
            r = i;
            cout << "The unique number in the array is: " << r << endl;
            return 0;
        }
    }*/

    //cout << unique(ar, n) << endl;
    cout << unique3(ar, n) << endl;
    return 0;
}