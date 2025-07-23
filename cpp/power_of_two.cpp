#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    
}

int main(){
    int limit = 100;
    int no_of_powers =0;
    for (int i=0;i<=limit;i++){
        if (isPowerOfTwo(i)){
            no_of_powers++;
        }
    }
    cout << "Number of powers of 2 between 1 and " << limit << " is: " << no_of_powers << endl;
    return 0;
}