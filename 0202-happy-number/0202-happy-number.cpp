class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        
        while(slow != fast && fast != 1){
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        if(fast == 1)   return true;
        else    return false;
    }
    int getNext(int n){
        int sq = 0;
        int res = 0;
        while(n){
            int digit = n%10;
            sq = digit * digit;
            res += sq;
            n /= 10;
        }
        return res;
    }
};