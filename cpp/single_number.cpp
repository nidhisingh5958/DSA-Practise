// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <iostream>
using namespace std;

class Solution {
    int singleNumber (vector<int>& nums){
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};

int main(){
    Solution(singleNumber()) ;
}
