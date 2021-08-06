#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int largerect(int ar[], int n){
    stack<int> st;
    int area = 0;
    for(int i=0; i<n; i++){
        while(ar[i]>=st.top() && i<n){
            st.push(ar[i]);
            i++;
        }
        int w=1, h=0;
        while(!st.empty() && st.top()>=ar[i]){
            int h = st.top();
            area = max(area, h*w);
            w++;
            st.pop();
        }
        while(!st.empty()){
            st.pop();
        }
        cout << area << endl;
    }
    return area;
}

int main(){
    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];     
    }
    
    cout << largerect(ar, n) << endl;

    return 0;
}