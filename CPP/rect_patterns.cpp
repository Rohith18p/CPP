#include <iostream>
using namespace std;

int main(){
    
    int r, c, i, j;
    cin >> r >> c;
    i = 0;
    j = 0;

    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
                cout << "* ";
        }
        cout << endl;
    }

    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            if ((i==0)||(j==0)||(i==r-1)||(j==c-1)){
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