#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s1;
    getline(cin, s1);

    /*loops*/
    for(int i=0; i<s1.length(); i++){
        if(s1[i]>= 'a' && s1[i]<='z'){
            s1[i] -= 32;
        }
    }
    cout << s1 << endl;

    for(int i=0; i<s1.length(); i++){
        if(s1[i]>= 'A' && s1[i]<='Z'){
            s1[i] += 32;
        }
    }
    cout << s1 << endl;

    /*inbuilt functions*/
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << s1 << endl;

    string s2 = "54298";

    /*sort function*/
    sort(s2.begin(), s2.end(), greater<int>());
    cout << s2 << endl;
    
    /*highest repeating terms*/
    int count[26];
    for(int i=0; i<26; i++){
        count[i]=0;
    }
    for(int i=0; i<s1.length(); i++){
        count[s1[i]-'a'] += 1;
    }

    int mxf = 0;
    char mxl = 'a';
    for(int i=0; i<26; i++){
        if(count[i]>mxf){
            mxf = count[i];
            mxl = i + 'a';
        }
    }    
    cout << mxf << " " << mxl << endl;
    return 0;
}