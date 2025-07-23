#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num==1 || num==0) return false;
    for(int i=2; i*i<=num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int limit=100;
    int no_of_primes = 0;

    for(int i=2; i<=limit; i++){
        if (isPrime(i)){
            cout << i << " ";
            no_of_primes++;
        }
    }
    cout << "\nTotal prime numbers between 1 and " << limit << " is: " << no_of_primes << endl;
}