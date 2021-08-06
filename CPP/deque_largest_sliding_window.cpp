#include <iostream>
#include <deque>
#include <math.h>

using namespace std;

int main(){
    int n, k, ele;
    cin >> n >> k;
    int ar[n], res[k];

    deque<int> dq;
    for(int i=0; i<n; i++){
        cin >> ar[i];     
    }
    int mx = ar[0];
    for(int i=0; i<n-k+1; i++){
        for(int j=i; j<i+k; j++){
            mx = max(mx, ar[j]);
        }
        dq.push_back(mx);
    }
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
}