class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowNo = 0;
        int maxZero = 0;
        int zeroCount = 0;
        vector<int> res;
        
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){
                if(mat[i][j] == 1){
                    zeroCount++;
                }
            }
            if(maxZero < zeroCount){
                maxZero = zeroCount;
                rowNo = i;
            }
            zeroCount = 0;
        }
        res.push_back(rowNo);
        res.push_back(maxZero);
        return res;
    }
};