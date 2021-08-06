#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n, m;
    int i, j;
    cin >> n >> m;
    int ar[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    int s;
    cin >> s;

    /*logic 1*/
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(ar[i][j]==s){
                cout << "Number found\n";
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "Number doesn't exist in the array" << endl;

    /*logic 2*/
    int r=0, c=m-1;
    while(r<n && c>=0){
        if(ar[r][c] == s){
            cout << "Number found\n";
            cout << r << " " << c << endl;
            return 0;
        }
        else if(ar[r][c] < s){
            r++;
        }
        else{
            c--;
        }
    }
    cout << "Number doesn't exist in the array" << endl;
    return 0;
}
