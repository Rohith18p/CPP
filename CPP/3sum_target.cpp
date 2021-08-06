#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    bool found = false;
    
    int n, target;
    cin >> n >> target;
    vector<int> ar(n);
    for(auto &i : ar){
        cin >> i;
    }
    sort(ar.begin(), ar.end());
    for(int i=0; i<n; i++){
        int l=i+1, r=n-1;
        while(l<r){
            int cur = ar[i] + ar[l] + ar[r];
            if(cur == target){
                found = true;
            }
            else if(cur < target){
                l++;
            }
            else if(cur > target){
                r--;
            }
        }
    }
    
    if(found){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}