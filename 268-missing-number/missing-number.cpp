class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        while (true) {
            if (find(nums.begin(), nums.end(), i) != nums.end()) {
                i++;
            } else {
                return i;
            }
        }
    }
};