#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, k;
    cin >> n;

    int n_gap = j-1;

    for(i=0; i<3; i++){
        if(i==0){
            for(j=0; j<n-1; j=j+4){
                cout << "    *   ";
            }
            cout << endl;
        }
        else if(i==1){
            for(j=0; j<n-1; j=j+2){
                cout << "  * ";
            }
            cout << endl;
        }
        else if (i==2){
            for(j=0; j<=n-1; j=j+4){
                cout << "*       ";
            }
            cout << endl;
        }
    }

    
    return 0;

}