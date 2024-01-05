class DetectSquares {
public:
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        points[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int x1 = point[0];
        int y1 = point[1];
        int res = 0;
        for(auto x = points.begin(); x != points.end(); x++){
            unordered_map<int, int> ypoints = x->second;
            
            for(auto y = ypoints.begin(); y != ypoints.end(); y++){
                int x3 = x->first;
                int y3 = y->first;
                // skip points on same x-axis or y-axis
                if(abs(x3 - x1) == 0 || abs(x3 - x1) != abs(y3-y1)){
                    continue;
                }
                 res += points[x3][y3] * points[x1][y3] * points[x3][y1];
                // res += points[x3][y3] * points[x1][y3] * point[x3][y1];
            }
        }
        return res;
    }
    private:
    //x->{y->count}
    unordered_map<int, unordered_map<int, int>> points;
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */