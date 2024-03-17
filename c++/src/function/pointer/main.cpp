#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*pf)(int, int) = add;

    cout << pf(4, 5) << endl;

    return 0;
}