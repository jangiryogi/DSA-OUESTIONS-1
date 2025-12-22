#include <iostream>
using namespace std;

int main() {
    int N = 5;

    // Upper half (including middle row)
    for (int i = 1; i <= N; i++) {
        // Spaces
        for (int s = 1; s <= N - i; s++) {
            cout << " ";
        }
        // Stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = N - 1; i >= 1; i--) {
        // Spaces
        for (int s = 1; s <= N - i; s++) {
            cout << " ";
        }
        // Stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
