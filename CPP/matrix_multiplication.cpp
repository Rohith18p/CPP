#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n, m, x;
    int i, j;
    cin >> n >> m;
    int ar1[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> ar1[i][j];
        }
    }

    int k;
    cin >> k;
    int ar2[m][k];
    for (i=0; i<m; i++){
        for(j=0; j<k; j++){
            cin >> ar2[i][j];
        }
    }

    int sum=0;
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            for(x=0; x<m; x++){
                sum += ((ar1[i][x])*(ar2[x][j]));
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << endl;
    }
    return 0;
}
