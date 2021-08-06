#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s1, s2;
    int a = 712;
    getline(cin, s1);
    getline(cin, s2);

    cout << s1.find("krish") << endl;
    cout << s1.insert(6, " Poola") << endl;;
    cout << s1.size() << endl;
    cout << s1.substr(7, 7) << endl;
    cout << s1.length() << endl;

    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    cout << stoi(s2) << endl;
    
    cout << to_string(a) + "0" << endl;
    
    return 0;
}