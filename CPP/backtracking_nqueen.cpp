 #include <iostream>

 using namespace std;

bool cani(int** arr, int i, int j, int n){
    for(int r=0; r<i; r++){
        if(arr[r][j]==1){
            return false;
        }
    }

    int row=i;
    int col=j;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    row=i;
    col=j;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool queen(int** arr, int i, int n){
    if(i>=n){
        return true;
    }
    for(int col=0; col<n; col++){
        if(cani(arr, i, col, n)){
            arr[i][col]=1;

            if(queen(arr, i+1, n)){
                return true;
            }

            arr[i][col] = 0;
        }
    }
    return false;
}

 int main(){

    int n;
    cin >> n;

    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }

    if(queen(arr, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
 }