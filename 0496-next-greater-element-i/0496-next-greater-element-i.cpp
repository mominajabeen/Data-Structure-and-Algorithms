class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> res(nums1.size(), -1);
        stack<int> stk;
        
        for(int i = 0; i < nums2.size(); i++){
            while(!stk.empty() && nums2[i] > stk.top()){
                map[stk.top()] = nums2[i];
                stk.pop();
            }
            stk.push(nums2[i]);
        }
        for(int i = 0; i<nums1.size(); i++){
            if(map.find(nums1[i]) != map.end()){
                res[i] = map[nums1[i]];
            }
        }
        return res;
    }
};