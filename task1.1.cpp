#include <iostream>
using namespace std;

int main()
{
    int choice;
    float n1, n2, result;
    char restart;

    cout << "Operations:\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n" << endl;

    do {
        do {
            cout << "Enter the operation number: ";
            cin >> choice;
            cin.clear();
            cin.ignore();
        } while (choice < 1 || choice > 4);

        cout << endl;

        do {
            cout << "Enter the first number: ";
            cin >> n1;
            cin.clear();
            cin.ignore();
        } while (cin.fail());        
        
        do {
            cout << "Enter the second number: ";
            cin >> n2;
            cin.clear();
            cin.ignore();
        } while (cin.fail());

        cout << endl;

        switch (choice) {
        case 1:
            result = n1 + n2;
            cout << n1 << " + " << n2 << "= " << result << endl;
            break;
        case 2:
            result = n1 - n2;
            cout << n1 << " - " << n2 << "= " << result << endl;
            break;
        case 3:
            result = n1 * n2;
            cout << n1 << " * " << n2 << "= " << result << endl;
            break;
        case 4:
            if (n2 != 0) {
                result = n1 / n2;
                cout << n1 << " / " << n2 << "= " << result << endl;
            }
            else {
                cout << "Second number cannot be zero." << endl;
            }
            break;
        default:
            cout << endl;
        }
        

        cout << "\nDo you want to continue? (y/n): ";
        cin >> restart;

        cout << endl;
    } while (restart == 'y' || restart == 'Y');

    return 0;
}
