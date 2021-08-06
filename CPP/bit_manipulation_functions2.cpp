#include <iostream>

using namespace std;

int ispow2(int n){
    return (n && !(n & n-1));
}

int numof1(int n){
    int count = 0;
    while (n){
        count += 1;
        n = (n & n-1);
    }
    return count;
}

int subsets(int ar[], int n){
    for (int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout << ar[j] << " ";
            }
        }
        cout << endl;
    }
}
int main(){

    int n;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }

    cout << ispow2(n) << endl;
    cout << numof1(n) << endl;
    subsets(ar, n);

    return 0;
}