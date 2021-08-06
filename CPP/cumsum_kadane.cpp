#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int cum_sum(int ar[], int n){
    int i, sum;
    int cum[n+1];
    cum[0] = 0;
    for(i=1; i<=n; i++){
        cum[i] = cum[i-1] + ar[i-1];
    }
    int max_sum = INT_MIN;
    for(i=1; i<=n; i++){
        sum = 0;
        for(int j=0; j<i; j++){
            sum = cum[i] - cum[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int max_sum(int ar[], int n){
    int sum, max_sum=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                cout << ar[k] << " ";
                sum += ar[k];
            }
            max_sum = max(max_sum, sum);
            cout << endl;
        }
    }
    return max_sum;
}

int kadane(int ar[], int n){
    int i, sum=0;
    int maxsum = INT_MIN;
    for(i=0; i<n; i++){
        sum += ar[i];
        if(sum<0){
            sum = 0;
        }
        maxsum = max(maxsum, sum);     
    }
    return maxsum;
}

int main(){
    int n, i;
    cin >> n;
    int ar[n];
    for (i=0; i<n; i++){
        cin >> ar[i];
    }
    
    cout << "Max sum is: " << cum_sum(ar, n);
    return 0;
}
