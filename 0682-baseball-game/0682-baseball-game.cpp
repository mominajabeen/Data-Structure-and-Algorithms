class Solution {
public:
    int calPoints(vector<string>& operations) {
        int value1 = 0;
        int value2 = 0;
        stack<int> stk;
        
        for(string op:operations){
            if(op == "C"){
                stk.pop();
            }
            else if(op == "D"){
                stk.push(stk.top() * 2);
            }
            else if(op == "+"){
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1+value2);
            }
            else    stk.push(stoi(op));
        }
        int res = 0;
        while(stk.size()>0){
            res += stk.top();
            stk.pop();
        }
        return res;
    }
};