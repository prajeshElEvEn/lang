#include <iostream>
using namespace std;

void ops(int a = 5, int b = 4, int op = 1)
{
    switch (op)
    {
    case 1:
        cout << (a + b) << endl;
        break;
    case 2:
        cout << (a - b) << endl;
        break;
    case 3:
        cout << (a * b) << endl;
        break;
    case 4:
        cout << (a / b) << endl;
        break;
    case 5:
        cout << (a % b) << endl;
        break;
    case 6:
        cout << (a == b) << endl;
        break;
    case 7:
        cout << (a != b) << endl;
        break;
    case 8:
        cout << (a < b) << endl;
        break;
    case 9:
        cout << (a > b) << endl;
        break;
    case 10:
        cout << (a >= b) << endl;
        break;
    case 11:
        cout << (a <= b) << endl;
        break;
    case 12:
        cout << (a && b) << endl;
        break;
    case 13:
        cout << (a || b) << endl;
        break;
    case 14:
        cout << !true << endl;
        cout << !false << endl;
        break;
    case 15:
        cout << (a & b) << endl;
        break;
    case 16:
        cout << (a | b) << endl;
        break;
    case 17:
        cout << (a ^ b) << endl;
        break;
    case 18:
        cout << ~a << endl;
        break;
    case 19:
        cout << (a << b) << endl;
        break;
    case 20:
        cout << (a >> b) << endl;
        break;

    default:
        break;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "1. +\n2. -\n3. *\n4. /\n5. %\n6. ==\n7. !=\n8. <\n9. >\n10. >=\n11. <=\n12. &&\n13. ||\n14. !\n15. &\n16. |\n17. ^\n18. ~\n19. <<\n20. >>\n"
             << endl;
        cout << "> ";
        cin >> choice;
        ops(10, 5, choice);
    } while (choice != 0);

    return 0;
}