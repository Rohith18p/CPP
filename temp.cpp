#include <iostream>
#include <cmath>

using namespace std;

int prime(int n1, int n2){
    
    int i, j;
    cout << "The prime numbers between " << n1 << " and " << n2 << ":\n";

    for(i=n1; i<n2; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout << j << endl;
        }
    }
    return 0;
}

int fibanocci(int n){
    int n1 = 0;
    int n2 = 1;
    int temp = 0;
    cout << "0 1 ";
    for (int i=2; i<n; i++){
        temp = n1 + n2;
        cout << temp << " ";
        n1 = n2;
        n2 = temp;
    }
}

int factorial(int n){
    int i;
    int fact = 1;
    for (i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r){

    int comb = factorial(n)/(factorial(r)*factorial(n-r));

    return comb;
}

int pascal(int n){
    int i=0, j=0;
    for (i=0; i<n; i++){
        for (j=0; j<=i; j++){
            cout << ncr(i,j) <<" ";
        }
        cout << endl;
    }

}
int main(){

    int a, b;
    int fact = 1;
    cin >> a >> b;

    prime(a, b);
    fibanocci(a);

    int f = factorial(b);
    cout << "factorial of " << b << " is " << f << endl;

    int c = ncr(b, a);
    cout << "nCr value is " << c << endl;

    pascal(b);


    return 0;
}
