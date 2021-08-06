#include <iostream>
#include <math.h>

using namespace std;

int main(){
    /*int ar[] = {0,1,0,0,1,1,1,0,0,0,1,0,1,0,1,0,1,0};
    int n=18;
    int mx = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        while(ar[i] == 1){
            count++;
            i++;
        }
        mx = max(mx, count);
    }
    cout << "Max continouos 1's: " << mx << endl;*/

    int n, k; 
    cin >> n >> k;
    int ar[] = {1, 1, 0, 0, 0, 1};
    int i=0, zc=0, ans=0;
    for(int j=0; j<n; j++){
        if(ar[j]==0){
            zc++;
        }
        while(zc>k){
            if(ar[i]==0){
                zc--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
    }
    cout << ans << endl;
    return 0;
}