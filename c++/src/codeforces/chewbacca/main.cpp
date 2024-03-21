#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string sx = to_string(x);
    int n = sx.size();
    int ans = x;
    // cout << sx;
    for (int i = 0; i < n; i++)
    {
        int d = sx[i] - '0';
        // string is = sx[i];
    }
    return 0;
}