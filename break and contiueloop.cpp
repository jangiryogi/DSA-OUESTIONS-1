What will be the output of the following program that uses the break statement inside a loop
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        cout << "Babbar" << endl;
        break;
    }
    cout << "Love" << endl;
}

OUTPUT:
Babbar
Love



Q2 What will be the output of the following program that uses the continue statement inside a loop?
  #include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        continue;
        cout << "Babbar" << endl;
    }
}


OUTPUT:
(NO OUTPUT )
