#include <iostream>

using namespace std;

class contact{
    public:
    string name;
    int age;
    bool gen;

    contact(){
        cout << "default constructor" << endl;
    }

    ~contact(){
        cout << "Destructor" << endl;
    }
    
    contact(contact &a){
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gen = a.gen;
    }
    contact(string s, int i, bool b){
        name = s;
        age = i;
        gen = b;
    }

    void printi(){
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "gen : " << gen << endl;
    }
};

int main(){
    /*
    contact a[3];
    for(int i=0; i<3; i++){
        cin >> a[i].name;
        cin >> a[i].age;
        cin >> a[i].gen;
    }

    for(int i=0; i<3; i++){
        a[i].printi();
    }
    */
    contact a("Rohith", 20, 1);
    a.printi();

    contact b;
    contact c=a;
    c.printi();


    return 0;
}