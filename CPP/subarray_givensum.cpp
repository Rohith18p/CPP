#include <iostream>
#include <cmath>
#include <climits>

using namespace std;


int main(){
    int n, i, st, en;
    int sum=0;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    int s;
    cin >>s;

    for(i=0; i<n; i++){
        int j=i;
        while((sum<s+1)&&(j<n)){
            sum += ar[j];
            if (sum==s){
                st = i;
                en = j;
                cout << "start index: " << st+1 << endl;
                cout << "end index: " << en+1 << endl;
                return 0;
            }
            j++;
        }
        sum = 0;
    }

    return 0;
}
