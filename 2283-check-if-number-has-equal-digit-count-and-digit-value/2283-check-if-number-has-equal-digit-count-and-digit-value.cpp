class Solution {
public:
    bool digitCount(string num) {
        int count[10] = {};
        
        for(int i = 0; i<num.size(); i++){
            ++count[num[i] - '0'];
        }
        for(int i = 0; i<num.size(); i++){
            if(count[i] != num[i] - '0')    return false;
        }
        return true;
    }
};