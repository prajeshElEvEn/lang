#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    int &r = i;
    cout << r << endl;
    r = 7;
    cout << i << endl;
    cout << &r << endl;
    cout << r << endl;
    return 0;
}