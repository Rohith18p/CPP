#include <iostream>

using namespace std;

bool cani(int** mz, int i, int j, int n){
    if(i<n && j<n && mz[i][j]==1){
        return true;
    }
    else{
        return false;
    }
}

int ratmaze(int** mz, int i, int j, int n, int** sol){
    if((i==n-1) && (j==n-1)){
        sol[i][j]=1;
        return true;
    }
    if(cani(mz, i, j, n)){
        sol[i][j]=1;
        if(ratmaze(mz, i+1, j, n, sol)){
            return true;
        }
        else if(ratmaze(mz, i, j+1, n, sol)){
            return true;
        }

        sol[i][i] = 0;
        return false;
    }
    return false;
}


int main(){

    int n;
    cin >> n;
    int** mz = new int*[n];
    for(int i=0; i<n; i++){
        mz[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mz[i][j];
        }
    }

    int** sol=new int*[n];
    for(int i=0; i<n; i++){
        sol[i] = new int[n];
        for(int j=0; j<n; j++){
            sol[i][j] = 0;
        }
    }
 
    if(ratmaze(mz, 0, 0, n, sol)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}