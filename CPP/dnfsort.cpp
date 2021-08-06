#include <iostream>
#include <algorithm>

using namespace std;
void swap(int ar[], int i, int j){
    int temp = ar[i];
    ar[i] = ar[j];
    ar[j] = temp;
}


int dnfsort(int ar[], int n){
    int l=0;
    int h=n-1;
    int m=l;
    while(m<h){
        if (ar[m]==0){
            swap(ar, l, m);
            m++;
            l++;
        }
        else if (ar[m] == 1){
            m++;
        }
        else if(ar[m]==2){
            swap(ar, m, h);
            h--;
        }
    }
    
}

int main(){

    int ar[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    dnfsort(ar, 9);
    for(int i=0; i<9; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}