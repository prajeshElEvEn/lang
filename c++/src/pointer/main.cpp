#include <iostream>
using namespace std;

void swapp(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " " << y;
    cout << endl;
    swapp(x, y);
    cout << x << " " << y;
    return 0;
}
