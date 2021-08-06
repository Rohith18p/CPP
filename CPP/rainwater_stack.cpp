#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int rainwater(int ar[], int n){
    stack<int> st;
    int ans = 0;
    for(int i=0; i<n; i++){
        while(!st.empty() && ar[i]>ar[st.top()]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int wid = i - st.top() - 1;
            ans += (min(ar[i], ar[st.top()]) - ar[cur])*wid;
        }
        st.push(i);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];     
    }
    
    cout << rainwater(ar, n) << endl;

    return 0;
}