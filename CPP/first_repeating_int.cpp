#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){
    int n, i;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    const int N = 1e6+2;
    int idx[N];
    int mini = INT_MAX;
    for(i=0; i<n; i++){
        idx[i] = -1;
    }

    for(i=0; i<n; i++){
        if(idx[ar[i]]!=-1){
            mini = min(mini, idx[ar[i]]);
        }
        else{
            idx[ar[i]] = i;
        }
    }
    if(mini==INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << mini << endl;
    }
    return 0;
}
