// tells type of a variable

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int p;
    cout << typeid(p).name() << endl;
    char q;
    cout << typeid(q).name() << endl;
    double r;
    cout << typeid(r).name() << endl;
    bool s;
    cout << typeid(s).name() << endl;
    float t;
    cout << typeid(t).name() << endl;
    string u;
    cout << typeid(u).name() << endl;
    int v[10];
    cout << typeid(v).name() << endl;
    return 0;
}