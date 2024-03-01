class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> map;
        
        for(int i = 0; i<nums2.size(); i++){
            while(!st.empty() && nums2[i]>st.top()){
                map.insert({st.top(), nums2[i]});
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int> res;
        for(int i = 0; i<nums1.size(); i++){
            if(map[nums1[i]]){
                res.push_back(map[nums1[i]]); 
            }
            else res.push_back(-1);
        }
        return res;
    }
};