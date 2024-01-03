class Solution {
public:
    double myPow(double x, int n) {
        long exponent = abs(n);
        double curr = x;
        double res = 1.0;
        for(long i = exponent; i>0; i/= 2){
            if(i%2 == 1){
                res *= curr;
            }
            curr *= curr;
        }
        if(n<0) return 1/res;
        return res;
    }
};