#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){
    int n, i;
    cin >> n;
    int ar[n];
    for (i=0; i<n; i++){
        cin >> ar[i];
    }
    
    const int N = 1e6 + 2;
    bool check[N];
    for(i=0; i<N; i++){
        check[i] = false;
    }

    for(i=0; i<n; i++){
        if(ar[i]>=0){
            check[ar[i]] = true;
        }
    }

    for(i=1; i<N; i++){
        if(check[i]==0){
            cout << "The smallest positive missing integer is: " << i << endl;
            return 0;
        }
    }
    return 0;
}
