#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

// union cannot contain string
union Car
{
    char initials;
    int speed;
};

class Animals
{
public:
    string name;
    int age;
};

int main()
{
    cout << "bool -> " << sizeof(bool) << endl;
    cout << "int -> " << sizeof(int) << endl;
    cout << "long int -> " << sizeof(long int) << endl;
    cout << "float -> " << sizeof(float) << endl;
    cout << "double -> " << sizeof(double) << endl;
    cout << "char -> " << sizeof(char) << endl;
    cout << "string -> " << sizeof(string) << endl;

    int i = 0;
    int *p = &i;
    cout << "pointer -> " << sizeof(p) << endl;

    Person p1;
    cout << "Person -> " << sizeof(p1) << endl;

    Car c1;
    cout << "Car -> " << sizeof(c1) << endl;

    Animals dog;
    cout << "Animal -> " << sizeof(dog) << endl;

    return 0;
}