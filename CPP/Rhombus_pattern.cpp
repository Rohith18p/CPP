#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, k;
    cin >> n;

    int n_gap = n-1;

    for(i=0; i<n; i++){
        for (j=n_gap; j>0; j--){
            cout << " ";
        }
        n_gap -= 1;
        for (k=0; k<n; k++){
            cout << "* ";
        }     
        cout << endl;
    }
    return 0;

}