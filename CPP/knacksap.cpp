#include <iostream>
#include <cmath>

using namespace std;

int knacksap(int wt[], int val[], int l, int n){
    if(n==0 || l==0){
        return 0;
    }
    if(wt[n-1]>l){
        return knacksap(wt, val, l, n-1);
    }

    return max(knacksap(wt, val, l-wt[n-1], n-1)+val[n-1], knacksap(wt, val, l, n-1));
}
int main(){

    int wt[] = {2, 4, 6, 8, 10};
    int val[] = {10, 52, 25, 12, 46};
    int l = 16;
    cout << knacksap(wt, val, l, 5) << endl;
    return 0;
}