#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void countsort(int ar[], int n){
    int k=0;
    for(int i=0; i<n; i++){
        k = max(k, ar[i]);
    }
    int count[k+1] = {0};
    for(int i=0; i<n; i++){
        count[ar[i]] += 1;
    }

    for(int i=1; i<k+1; i++){
        count[i] = count[i] + count[i-1];
    }

    int sta[n];
    for(int i=n-1; i>=0; i--){
        count[ar[i]]--;
        sta[count[ar[i]]] = ar[i];
    }

    for(int i=0; i<n; i++){
        cout << sta[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    countsort(ar, n);
    return 0;
}