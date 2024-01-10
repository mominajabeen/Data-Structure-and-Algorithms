class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int pointG = g.size()-1;
        int pointS = s.size()-1;
        int count = 0;
        while(pointG >= 0 && pointS >=0){
            if(g[pointG] <= s[pointS]) {
                pointG--;
                pointS--;
                count++;
            }
            else    pointG--;
        }
        return count;
    }
};