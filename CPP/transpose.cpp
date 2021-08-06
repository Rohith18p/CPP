#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n;
    int i, j;
    cin >> n;
    int ar[n][n];
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> ar[i][j];
        }
    }

    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout << ar[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
