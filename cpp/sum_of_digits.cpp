#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum =0;

    while(num>0){
       int lastDigit = num % 10;
       num = num /10;
       digSum += lastDigit;
    }

    return digSum;
}

int main(){
    int num = 12345;
    cout<< "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}