class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        for(char n:num){
            while(res.size() && k>0 && n<res.back()){
                res.pop_back();
                k--;
            }
            if(res.size() or n!='0')    res.push_back(n);
        }
        while(res.size() && k>0){
            res.pop_back();
            k--;
        }
            return res.empty()? "0":res;
    }
};