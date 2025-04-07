#include <iostream>
#include <string>
using namespace std;

int main()
{
    string task[100][2];
    int choice, n = 0, index;
    char restart = 'y';

    cout << "Operations\n1 - Add task\n2 - Mark task as completed\n3 - Delete task\n4 - Display task\n" << endl;

    do {
        do {
            cout << "Enter the operation number: ";
            cin >> choice;
            cin.clear();
            cin.ignore();
        } while (choice < 1 || choice > 4);

        switch (choice) {
        case 1:
            if (n >= 100) {
                cout << "Task list is full! Cannot add more tasks." << endl;
                break;
            }

            cout << "Enter the task: ";
            getline(cin, task[n][1]);

            task[n][0] = "0";
            n += 1;
            break;

        case 2:
            do {
                cout << "Enter the index of task to mark complete: ";
                cin >> index;
                cin.clear();
                cin.ignore();
            } while (cin.fail() || index < 1 || index > n);

            task[index][0] = "1";

            cout << "Task " << index << " has been marked as complete." << endl;

            break;

        case 3:
            do {
                cout << "Enter the index of task to delete: ";
                cin >> index;
                cin.clear();
                cin.ignore();
            } while (cin.fail() || index < 1 || index > n);

            for (int i = index - 1; i < n; i++) {
                task[i][0] = task[i + 1][0];
                task[i][1] = task[i + 1][1];
            }
            
            n -= 1;

            cout << "Task " << index << " has been deleted." << endl;
            
            break;

        case 4:
            cout << "0: not finished\n1:finished\n" << endl;

            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". [" << task[i][0] << "] " << task[i][1] << endl;
            }
            break;

        default:
            cout << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> restart;
        cin.ignore();
    } while (restart == 'y' || restart == 'Y');

    return 0;
}
