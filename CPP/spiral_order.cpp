#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){
    int n, m;
    int i, j;
    cin >> n >> m;
    int ar[n][m];
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> ar[i][j];
        }
    }
    
    int rs=0, re=n-1, cs=0, ce=m-1;
    while((rs<=re)&&(cs<=ce)){
        for(j=cs; j<=ce; j++){
            cout << ar[rs][j] << " ";
        }
        rs++;

        for(i=rs; i<=re; i++){
            cout << ar[i][ce] << " ";
        }
        ce--;

        for(j=ce; j>=cs; j--){
            cout << ar[re][j] << " ";
        }
        re--;
        
        for(i=re; i>=rs; i--){
            cout << ar[i][cs] << " ";
        }
        cs++;
    } 

    return 0;
}
