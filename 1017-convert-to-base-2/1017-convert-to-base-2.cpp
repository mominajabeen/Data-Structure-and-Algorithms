class Solution {
public:
    string baseNeg2(int n) {
        string res = "";
        int r;
        if(n == 0)  res += ('0');
        while(n){
            r = n%(-2);
            if(r<0){
                r += 2;
                n = n/(-2) +1;
            }
            else{
                n /= (-2);
            }
            res += (r+'0');
        }
        reverse(res.begin(), res.end());
        return res;
        }
};