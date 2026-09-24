class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
                int left = 0;
                        int zeros = 0;
                                int maxLength = 0;

                                        for (int right = 0; right < nums.size(); right++) {

                                                    if (nums[right] == 0) {
                                                                    zeros++;
                                                                                }

                                                                                            // If zeros exceed k, shrink the window
                                                                                                        while (zeros > k) {
                                                                                                                        if (nums[left] == 0) {
                                                                                                                                            zeros--;
                                                                                                                                                            }
                                                                                                                                                                            left++;
                                                                                                                                                                                        }

                                                                                                                                                                                                    // Current window length
                                                                                                                                                                                                                maxLength = max(maxLength, right - left + 1);
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                return maxLength;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                        };
