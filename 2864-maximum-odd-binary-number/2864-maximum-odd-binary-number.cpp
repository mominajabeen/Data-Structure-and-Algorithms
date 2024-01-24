class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int oneCount = -1;
        string res = "";
        
        for(auto ch:s){
            oneCount += ch == '1';
        }
        for(int i = 0; i<s.size(); i++, oneCount--){
            if(oneCount > 0){
                res += '1';
            }
            else    res += '0';
        }
        res.pop_back();
        return res += '1';
    }
};