#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=0; i<numRows; i++){
            result[i].assign(i+1, 1); 
            for(int&& j=1; j<=i/2; j++){
                result[i][i-j] = result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    int numRows = 5; 
    sol.generate(numRows);
    return 0;
}