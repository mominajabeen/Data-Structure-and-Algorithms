class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int slow = 0, fast = 0;
        for(int i = 0; i<nums.size(); i++){
            bool isForward = nums[i]>=0;
             slow = i, fast = i;
            
            do{
                slow = findNextInd(nums, isForward, slow);
                fast = findNextInd(nums, isForward, fast);
                
                if(fast != -1)  fast = findNextInd(nums, isForward, fast);
                
            }while(slow != -1 && fast != -1 && fast != slow);
                            
            if(slow != -1 && slow == fast)  return true;
        }
        return false;
    }
    private:
    int findNextInd(vector<int>& nums, bool isForward, int currentIndx){
        bool direction = nums[currentIndx] >= 0;
        if(isForward != direction)  return -1;
        
        int nextIndx = ((currentIndx + nums[currentIndx])+nums.size())%nums.size();
        if(nextIndx == currentIndx)     return -1;
        
        return nextIndx;
    }
};