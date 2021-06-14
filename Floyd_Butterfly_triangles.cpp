#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, k;
    cin >> n;


    /*Floyd's triangle*/
    k=1;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (j<=i){
                cout << k <<" ";
                k++;
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    /*Butterfly triangle*/
    for(i=0; i<n; i++){
        for(j=0; j<2*n; j++){
            if((j<=i)||(j>=2*n-i-1)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(i=n; i>0; i--){
        for(j=0; j<2*n; j++){
            if((j<=i)||(j>=2*n-i-1)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;

}