class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        int i = 0;
        while(i < n){
            res ^= start + 2 * i;
            i++;
        }
        return res;
    }
};