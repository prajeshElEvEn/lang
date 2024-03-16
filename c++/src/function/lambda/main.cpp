// lambda
// [capture clause](params){definition};

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    auto hello = []()
    {
        cout << "hello" << endl;
    };
    hello();

    int three = 3;
    int four = 4;
    auto multipyByThree = [three](int i)
    {
        return i * three;
    };

    cout << multipyByThree(5) << endl;

    vector<int> v{1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), [=](int x)
             { cout << x * three * four << endl; });

    return 0;
}