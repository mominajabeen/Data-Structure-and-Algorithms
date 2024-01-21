class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxLeft = height[l], maxRight = height[r];
        int res = 0;
        while(l<r){
            if(maxLeft <= maxRight){
                l++;
                maxLeft = max(maxLeft, height[l]);
                res += maxLeft - height[l];
            }
            else{
                r--;
                maxRight = max(maxRight, height[r]);
                res += maxRight - height[r];
            }
        }
        return res;
    }
};