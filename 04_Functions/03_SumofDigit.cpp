#include <iostream>
using namespace std;

int sumOfDigit(int num){
    int digit = 0;

    while (num > 0){
        int lastDigit = num % 10;
        num = num / 10;

        digit += lastDigit;
    }
    return digit;
}

int main(){
    int num;
    cout << "enter number = ";
    cin >> num ;
    cout <<"sum = " <<sumOfDigit(num)<< endl;
    
    return 0;
}