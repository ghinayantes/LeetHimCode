#include <iostream>
#include <vector> // vector: array dinamis

using namespace std;

class Solution { // dengan algoritma bruteforce
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> hasil = sol.twoSum(nums, target);
    
    cout << "Indeks hasil: [" << hasil[0] << ", " << hasil[1] << "]" << endl;
    
    return 0;
}