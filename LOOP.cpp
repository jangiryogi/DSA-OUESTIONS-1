Write a C++ program that takes a score as input and prints "India wins" if the score is greater than 50, otherwise prints "pak wins".

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
