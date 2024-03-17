// one ptr is allowed to own one object at a time

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p(new int(5));
    unique_ptr<int> q = make_unique<int>(10);
    unique_ptr<int> r = move(p);

    cout << *p << endl;
    cout << *q << endl;
    cout << *r << endl;
    return 0;
}