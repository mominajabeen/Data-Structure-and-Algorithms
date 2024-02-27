class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;
        for(auto ch:s){
            if(ch == '(' or ch == '{' or ch == '[')     stk.push(ch);
            else{
                if(stk.empty() or (ch == ')' && stk.top() != '(') or (ch == '}' && stk.top() != '{') or (ch == ']' && stk.top() != '[')){
                    return false;
                }
                else    stk.pop();
            }
        }
        return stk.empty();
    }
};