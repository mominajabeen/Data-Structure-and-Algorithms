class Solution {
public:
    vector<int> evenOddBit(int n) {
        int x = 1<<9;
        int i = 0;
        int odd = 0;
        int even = 0;
        while(i<10){
            if((n&x) && (i%2==0))   odd++;
            else if((n&x) && (i%2==1))  even++;
            i++;
            x = x>>1;
        }
        return {even, odd};
    }
};