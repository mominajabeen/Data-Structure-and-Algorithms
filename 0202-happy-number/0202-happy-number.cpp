class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = (n);
        do{
            slow = findSquare(slow);
            fast = findSquare(findSquare(fast));
        }while(slow != fast);
        if(slow == 1)   return true;
        else return false;
    }
    private:
    int findSquare(int number){
        int square = 0;
        while(number){
            int digit = number%10;
            number /= 10;
            square += (digit*digit);
        }
        return square;
    }
};