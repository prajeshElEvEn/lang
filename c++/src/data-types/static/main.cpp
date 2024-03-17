// static persists the value even after reinitialization

#include <iostream>
using namespace std;

int inc()
{
    int i = 0;
    cout << i << endl;
    i++;
    return 0;
}
int sinc()
{
    static int i = 0;
    cout << i << endl;
    i++;
    return 0;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        inc();
    }
    cout << "-----------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        sinc();
    }

    return 0;
}