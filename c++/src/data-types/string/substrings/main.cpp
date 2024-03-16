#include <iostream>
using namespace std;

int main()
{
    string s = "babad";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string sub = "";
            for (int k = j; k < n; k++)
            {
                sub += s[k];
            }
            cout << sub << endl;
        }
    }

    return 0;
}