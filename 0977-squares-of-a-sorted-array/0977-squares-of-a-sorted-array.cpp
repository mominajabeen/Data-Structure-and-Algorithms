class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        vector<int> res(nums.size());
        
        for(int k = nums.size()-1; k >= 0; k--){
            if(abs(nums[l]) < abs(nums[r])){
                res[k] = nums[r]*nums[r--];
            }
            else{
                res[k] = nums[l]*nums[l++];
            }
        }
        return res;
    }
};
        // vector<int> res(A.size());
        // int l = 0, r = A.size() - 1;
        // for (int k = A.size() - 1; k >= 0; k--) {
        //     if (abs(A[r]) > abs(A[l])) res[k] = A[r] * A[r--];
        //     // else res[k] = A[l] * A[l++]