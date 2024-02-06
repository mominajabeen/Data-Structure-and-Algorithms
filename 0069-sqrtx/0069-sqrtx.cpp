class Solution {
public:
    int mySqrt(int x) {
        double i = 1;
        while(true){
            if(i*i > abs(x)){
                return i-1;
            }
            i++;
        }
        return 0;
    }
};