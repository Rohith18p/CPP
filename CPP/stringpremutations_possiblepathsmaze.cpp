#include <iostream>

using namespace std;

void permutation(string s, string ans){

    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);

        permutation(ros, ans+ch);
    }
}

int pospaths(int s, int e){

    if(s==e){
        return 1;
    }
    else if(s>e){
        return 0;
    }
    else{
        int count = 0;
        for(int i=1; i<=6; i++){
            count += pospaths(s+i,e);
        }
        return count;
    }
}

int pospathsmaze(int n, int i, int j){
    if((i==n-1) && (j==n-1)){
        return 1;
    }
    else if((i>n-1) || (j>n-1)){
        return 0;
    }
    
    return (pospathsmaze(n,i+1,j) + pospathsmaze(n,i,j+1));
}


int main(){

    string s;
    int n;
    cin >> n >> s;
    string ans="";
    permutation(s, ans);
    cout << pospaths(0,n) << endl;
    cout << pospathsmaze(n,0,0) << endl;
    
    return 0;
}
