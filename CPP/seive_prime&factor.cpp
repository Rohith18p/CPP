#include <iostream>

using namespace std;

int seiveprime(int n){
    int ar[n] = {0};
    for(int i=2; i<=n; i++){
        if(ar[i]==0){
            for(int j=i*i; j<=n; j += i){
                ar[j] = 1;
            }
        }
    }

    for(int i=2; i<n+1; i++){
        if(ar[i]==0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int primefactor(int n){
    int spf[n] = {0};
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout << spf[n] << " ";
        n /= spf[n];
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    
    seiveprime(n);
    primefactor(n);
    return 0;
}