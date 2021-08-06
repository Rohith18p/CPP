#include <iostream>
#include <cmath>

using namespace std;

bool pytrip(int x, int y, int z){
    int a, b, c;
    a = max(x, max(y,z));
    if(a == x){
        b=y;
        c=z;
    }
    else if(a == y){
        b=x;
        c=z;
    }
    else if(a == z){
        b=y;
        c=x;
    }
    if (a*a == (b*b + c*c)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    cout << pytrip(x,y,z) << endl;
    return 0;
}