#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {
        cout << "Enter number: ";
        cin >> num;

        if (num == 0) {
            cout << "Program stopped." << endl;
            break;            
        }

        if (num % 2 == 0) {
            cout << num << " is Even" << endl;
        } else {
            cout << num << " is Odd" << endl;
        }
    }

    return 0;
}
