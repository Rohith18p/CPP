#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int, int>> st;
    for(auto price:prices){
        int count = 1;
        while(!st.empty() && st.top().first<=price){
            count += st.top().second;
            st.pop();
        }
        st.push({price, count});
        ans.push_back(count);
    }

    return ans;
}

int main(){
    vector<int> ar = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockspan(ar);
    for(auto i : res){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}