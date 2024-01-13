class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        set<int> Union;
        set<int> s1 (nums1.begin(), nums1.end());
        set<int> s2 (nums2.begin(), nums2.end());
        for(int num:nums1)  Union.insert(num);
        for(int num:nums2)  Union.insert(num);
        int common = s1.size()+s2.size() - Union.size();
        
        int ans = 0;
        ans += min(n/2, (int)s1.size() - common);
        ans += min(n/2, (int)s2.size() - common);
        ans += common;
        
        return min(ans, n);
    }
};