#include <iostream>

using namespace std;

long long merge(int ar[], int s, int mid, int e){
    long long inv = 0;
    int n1 = mid-s+1;
    int n2 = e - mid;

    int ar1[n1];
    int ar2[n2];

    for(int i=0; i<n1; i++){
        ar1[i] = ar[s+i];
    }
    for(int i=0; i<n2; i++){
        ar2[i] = ar[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=s;
    while((i<n1) && (j<n2)){
        if(ar1[i] <= ar2[j]){
            ar[k] = ar1[i];
            k++;
            i++;
        }
        else{
            ar[k] = ar2[j];
            inv += n1-i;
            k++;
            j++;
        }
    }
    while(i<n1){
        ar[k] = ar1[i];
        k++;
        i++;
    }
    while(j<n2){
        ar[k] = ar2[j];
        k++;
        j++;
    }

    return inv;
}

long long mergesort(int ar[], int s, int e){
    long long inv = 0;
    if(s<e){
        int mid = (s+e)/2;
        inv += mergesort(ar, s, mid);
        inv += mergesort(ar, mid+1, e);

        inv += merge(ar, s, mid, e);
    }
    return inv;
}

int main(){

    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int inv = mergesort(ar, 0, n-1);

    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
    cout << inv << endl;
    return 0;
}