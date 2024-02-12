class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxCount = 0;
        int team = 0;
        for(int i = 0; i<grid.size(); i++){
            int sum = 0;
            for(int j = 0; j<grid[0].size(); j++){
               sum += grid[i][j];
            }
            if(maxCount<sum){
                maxCount = sum;
                team = i;
            }
        }
        return team;
    }
};