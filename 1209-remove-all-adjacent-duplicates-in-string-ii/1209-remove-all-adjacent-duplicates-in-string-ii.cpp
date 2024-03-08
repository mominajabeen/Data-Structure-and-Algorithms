class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stack;
        for(char c:s){
            if(!stack.empty() && c==stack.back().first){
                stack.back().second++;
            }
            else
                stack.push_back({c,1});
            if(!stack.empty() && stack.back().second == k){
                stack.pop_back();
            }
        }
        string res;
        for(auto &p:stack){
            res.append(p.second, p.first);
        }
        return res;
    }
};