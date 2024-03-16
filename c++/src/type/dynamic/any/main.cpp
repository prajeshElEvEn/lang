// requires C++17

#include <iostream>
#include <any>
using namespace std;

int main()
{
    any a = 4;
    cout << any_cast<int>(a) << endl;
    return 0;
}