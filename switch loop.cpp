Write the output of the following program for different input values using a switch statement.
  #include <iostream>
using namespace std;

int main() {
    int val;
    cout << "Enter the value " << endl;
    cin >> val;

    switch(val) {
        case 1: cout << "Love ";
                break;
        case 2: cout << "Babbar";
                break;
        case 3: cout << "Ramesh";
                break;
        case 4: cout << "Rahul";
                break;
        default: cout << "Suresh";
    }
}

OUTPUT:
ON 1 = LOVE 
ON 2 = BABBAR 
ON 3 = RAHUL 
ON 40R RANDOM  = SURESH 
