#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}

int main(){
    /*
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.push_back(2);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto el:v){
        cout << el << " ";
    }

    cout << endl;
    vector <int> v1 (3, 10);
    for(auto e:v1){
        cout << e << " ";
    }
    v1.pop_back();
    */
    //Reducing array
    int ar[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector <pair <int, int> > v2;

    for(int i=0; i<(sizeof(ar)/sizeof(ar[0])); i++){
        v2.push_back(make_pair(ar[i], i));
    }

    sort(v2.begin(), v2.end(), comp);

    for(int i=0; i<v2.size(); i++){
        ar[v2[i].second] = i;
    }
    for(int i=0; i<v2.size(); i++){
        cout << ar[i] << " ";
    }
    cout << endl;
    
    return 0;
}