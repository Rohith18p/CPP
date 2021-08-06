#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, k;
    cin >> n;

    int n_gap = n-1;

    /*pyramid*/
    for(i=0; i<n; i++){
        for (j=n_gap; j>0; j--){
            cout << " ";
        }
        n_gap -= 1;
        for (k=0; k<=i; k++){
            cout << k+1 <<" ";
        }     
        cout << endl;
    }

    /*pallindrome*/
    n_gap = (n-1);
    for (i=0; i<n; i++){
        for (j=n_gap; j>0; j--){
            cout << "  ";
        }
        n_gap -= 1;
        for(k=i+1; k>0; k--){
            cout << k << " " ;
        }
        if(i>0){
            for(k=0; k<i; k++){
                cout << k+2 << " ";
            }
        }
        cout << endl;
    }

    /*star */
    n_gap = n-1;
    for(i=0; i<n; i++){
        for(j=n_gap; j>0; j--){
            cout << "  ";
        }
        n_gap -= 1;
        for(k=0; k<2*i+1; k++){
            cout << "* ";
        }
        cout << endl;
    }
    for(i=0; i<n; i++){
        if(i>0){
            for(j=0; j<i; j++){
                cout << "  ";
            }
        }
        for(k=0; k<2*(n-i)-1; k++){
            cout << "* ";
        }   
        cout << endl;
    }

    return 0;

}