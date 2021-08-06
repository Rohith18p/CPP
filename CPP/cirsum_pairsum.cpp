#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

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

int circsum(int ar[], int n){
    int i, sum;
    int linsum = kadane(ar,n);
    for(i=0; i<n; i++){
        sum += ar[i];
        ar[i] = -ar[i];
    }

    int cirsum = sum + kadane(ar, n);
    cirsum = max(cirsum, linsum);
    return cirsum;
}

bool pair_sum(int ar[], int n, int sum){
    int i;
    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((ar[i] + ar[j]) == sum){
                cout << i << " " << j << endl;
                return true;
        }
        }
    }
    return false;
}

int main(){
    int n, i, sum;
    cin >> n;
    int ar[n];
    for (i=0; i<n; i++){
        cin >> ar[i];
    }
    
    cin >> sum;
    cout << pair_sum(ar, n, sum);
    return 0;
}
