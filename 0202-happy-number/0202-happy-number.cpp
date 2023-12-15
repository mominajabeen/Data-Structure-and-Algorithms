class Solution {
public:
    bool isHappy(int n) {
        set<int> visit;
        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = sumOfSquare(n);
            if(n == 1)     return true;
            else    continue;
        }
        return false;
    }
    private:
    int sumOfSquare(int n){
        int sq = 0;
        int squar = 0;
        while(n){
            int digit = n%10;
            int square = digit*digit;
            sq += square;
            n /= 10;
        }
        return sq;
    }
};