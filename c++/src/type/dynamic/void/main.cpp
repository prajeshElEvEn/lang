#include <iostream>
using namespace std;

int main()
{

    int i = 4;

    void *vp = &i;

    cout << *(static_cast<int *>(vp)) << endl;

    return 0;
}