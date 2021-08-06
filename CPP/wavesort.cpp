#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void swap(int ar[], int i, int j){
    int temp = ar[i];
    ar[i] = ar[j];
    ar[j] = temp;
}

void wavesort(int ar[], int n){
    
    for(int i=1; i<n-1; i=i+2){
        if(ar[i]>ar[i-1]){
            swap(ar, i, i-1);
        }
        if(ar[i]>ar[i+1]){
            swap(ar, i, i+1);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    wavesort(ar, n);
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}