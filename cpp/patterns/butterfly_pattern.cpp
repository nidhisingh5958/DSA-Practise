#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int k=0;

    for (int i = 0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << '*'; 
        }
        for (int j=0; j<n-i-1; j++){
            cout << ' ';
        }
        for (int j=0; j<n-i-1; j++){
            cout << ' ';
        }
        for (int j=0; j<i+1;j++){
            cout << '*';
        }
         cout << endl;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout << '*';
        }
        for (int j=0; j<i+1; j++){
            cout << ' ';
        }
        for (int j=0; j<i+1; j++){
            cout << ' ';
        }   
        for (int j=0; j<n-1-i;j++){
            cout << '*';
        }
        cout << endl;
    }
}