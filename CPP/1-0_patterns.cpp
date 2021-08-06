#include <iostream>
using namespace std;

int main(){
    
    int n, i, j, prev;
    cin >> n;


    for (i=0; i<n; i++){
        if (i%2 == 0){
            prev = 0;
        }
        else{
            prev = 1;
        }
        for(j=0; j<=i; j++){
            if(prev==0){
                cout << "1 ";
                prev =1;
            }
            else{
                cout << "0 ";
                prev =0;
            }
        }
        cout << endl;
    }
    
    return 0;

}