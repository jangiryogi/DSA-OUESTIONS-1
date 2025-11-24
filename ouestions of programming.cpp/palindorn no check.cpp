#include <iostream>
using namespace std;



int main(){
    int num,temp ,rev =0 ;
    cout << "Enter a number"<<endl;
    cin >>num;
    temp=num;

     

       while(num!=0){
        int digit = num%10;
        rev = rev * 10 + digit;
        num =  num/10;
    }

    if (temp ==rev ){
        cout <<temp<< " a Palindrome number" << endl;
    } else {
        cout << temp<<"s NOT a Palindrome number" << endl;
    }

    return 0;
}
