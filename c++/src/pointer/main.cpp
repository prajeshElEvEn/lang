#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    int *p = &i;
    cout << p << endl;
    cout << *p << endl;

    int &r = i;
    cout << r << endl;
    r = 7;
    cout << i << endl;
    cout << r << endl;
    cout << *p << endl;
    return 0;
}