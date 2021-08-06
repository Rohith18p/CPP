#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int maxmin(int ar[], int n){
    int mx = INT_MAX;
    for (int i=0; i<n; i++){
        mx = max(mx,ar[i]);
    }
    return mx;
}

int mini(int ar[], int n){
    int mn = INT_MIN;
    for (int i=0; i<n; i++){
        mn = min(mn,ar[i]);
    }
    return mn;
}

int lsearch(int ar[], int n, int f){
    for(int i=0; i<n; i++){
        if(ar[i]==f){
            break;
            return i;
        }
    }
    return -1;
}

int binsearch(int ar[], int n, int f){
    int s=0;
    int e=n;
    while(s<=n){
        int m = (s+e)/2;
        if (ar[m]==f){
            return m;
        }
        else if (ar[m]<f){
            s=m+1;
        }
        else{
            e=m-1;
        }  
    }
}

int selection_sort(int ar[], int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[j]<ar[i]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for(int j=0; j<n; j++){
        cout<<ar[j]<<" ";
    }
}

int bubble_sort(int ar[], int n){
    int temp, i=0;
    while(i<n){
        for(int j=0; j<n-i; j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
        i++;
    }           
    for(int j=0; j<n; j++){
        cout<<ar[j]<<" ";
    }
}

int insertion_sort(int ar[], int n){
    int temp, i;
    for(i=1; i<n; i++){
        int pres = ar[i];
        int j = i-1;
        while(ar[j]>pres){
            ar[j] = ar[j+1];
            j--;
        }
        ar[j+1]=pres;
    }
    for(int j=0; j<n; j++){
        cout<<ar[j]<<" ";
    }
}

int main(){
    int n, i, f;
    cin >> n;
    int ar[n];
    for (i=0; i<n; i++){
        cin >> ar[i];
    }
    /*cout << "Enter search variable: ";
    cin >> f;*/

    selection_sort(ar, n);
    return 0;
}