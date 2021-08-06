#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char ar[n+1];

    /*pallindrome
    cin >> ar;
    for(int i=0; i<=(n/2); i++){
        if(ar[i] != ar[n-1-i]){
            cout << "Not a pallindrome\n";
            return 0;
        }
    }
    cout << "Palloindrome\n";*/

    /*largest word in sentence*/
    cin.getline(ar, n);
    cin.ignore();
    int i;
    int len=0;
    int mx = INT_MIN;

    for(i=0; i<n; i++){
        if(ar[i]!=' '){
            len += 1;
        }
        else{
            mx = max(mx, len);
            len = 0;
        }
    }
    cout << "max length: " << mx << endl;
    return 0;
}