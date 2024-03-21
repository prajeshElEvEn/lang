#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, X = 0;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (auto i : v)
    {
        if (i == "--X")
            --X;
        if (i == "X--")
            X--;
        if (i == "X++")
            X++;
        if (i == "++X")
            ++X;
    }

    cout << X << endl;

    return 0;
}