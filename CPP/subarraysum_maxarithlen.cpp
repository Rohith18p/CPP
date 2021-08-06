#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int maxti(int ar[], int i){
    int mx = ar[0];
    for (int j=0; j<=i; j++){
        mx = max(mx, ar[j]);
        cout << mx << " ";
    }
    cout << endl;
}

int sum_suba(int ar[], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum += (n-j)*ar[j];
        }
    }
    return sum;
}

int arith_len_max(int ar[], int n, int i){
    int plen = 2, d;
    int maxl = 0;
    int pd = ar[1] - ar[0];
    for(int j=2; j<n; j++){
        d = ar[j] - ar[j-1];
        if(pd==d){
            plen += 1;
        }
        else{
            pd = d;
            if(plen>maxl){
                maxl = plen;
            }
            plen = 2;
        }
    }
    return maxl;
}
int main(){
    int n, i;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    /*cin >> i;
    maxti(ar, i);
    cout << "sum of subarrays: " << sum_suba(ar, n) << endl;*/
    cout << "max length of arithmetic array: " << arith_len_max(ar, n, i) << endl;
    return 0;
}
