 Q1 Write a C++ program that takes a score as input and prints "India wins" if the score is greater than 50, otherwise prints "pak wins".

  #include <iostream>
using namespace std;

int main() {
    
    int score;

  cout << "Enter the score " << endl;

    cin >> score;

    if(score > 50) {
        cout << "India wins" << endl;
    }

    cout << "pak wins" << endl;
}


Q2 Write a C++ program using if–else to check whether a given number is a multiple of 6. The number should be less than or equal to 650

  #include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number upto 650: ";
    cin >> num;

    if(num <= 650 && num % 6 == 0) {
        cout << num << " is a multiple of 6" << endl;
    }
    else {
        cout << num << " false" << endl;
    }

    return 0;
}
