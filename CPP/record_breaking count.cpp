#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){
    int n, i;
    cin >> n;
    int ar[n+1];
    ar[n]=-1;
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    int mx = ar[0];
    int c=0;
    for(i=1; i<n; i++){
        if((ar[i]>mx)&&(ar[i]>ar[i+1])){
            c += 1;
        }
        mx = max(mx, ar[i]);
    }
    cout << "Number of record breaking days: "<< c << endl;
    return 0;
}
