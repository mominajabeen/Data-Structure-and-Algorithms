class NumArray {
public:
    vector<int> a;
    NumArray(vector<int>& nums) {
        int s = 0;
        for(int i = 0; i<nums.size(); i++){
            s += nums[i];
            a.push_back(s);
        }
    }
    
    int sumRange(int left, int right) {

        return left-1>=0?(a[right] - a[left-1]):a[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */