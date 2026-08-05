class Solution {
public:
    void rotateArray(vector<int>& arr, int a, int b){
        while(a<=b){
            swap(arr[a], arr[b]);
            a++; b--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0) return;
        rotateArray(nums, 0, n - 1);
        rotateArray(nums, 0, k - 1);
        rotateArray(nums, k, n - 1);
}
    
};