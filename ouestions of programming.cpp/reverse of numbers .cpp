#include <iostream>
using namespace std;

int main(){
    int num,rev=0;
    cout<<"enter the value"<<endl;
    cin>>num;
    while(num!=0){
        int digit = num%10;
        rev = rev*10+ digit ;
        num =num/10;
    }

   
 cout << "reverse no is " << rev << endl;
 
 return 0;
 

} 
