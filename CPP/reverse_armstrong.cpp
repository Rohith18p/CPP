#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n, i, j;
    int temp, r;
    cin >> n;

    /*prime*/
    for (i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout << "Not a Prime" << endl;
            break;
        }
        else{
            continue;
        }
    }
    if(i==n){
        cout << "Prime" << endl;
    }

    
    /*Reverse logic 1*/
    temp = n;
    while(temp/10 != 0){
        r = temp%10;
        cout << r;
        temp /= 10;
    }
    cout << temp << endl;
    /*Reverse logic 2*/
    temp = n;
    r = 0;
    j = 0;
    while(temp>0){
        r = temp%10;
        j = j*10 + r;
        temp /= 10;
    }
    cout << j << endl;

    /*Armstrong number*/
    temp = n;
    j = 0;
    int arm = 0;
    while (temp>0){
        r = temp%10;
        arm += r*r*r;
        cout << arm << endl;
        temp /= 10;
    }

    if (arm==n){
        cout << "Armstrong number"<< endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }
    
    return 0;

}