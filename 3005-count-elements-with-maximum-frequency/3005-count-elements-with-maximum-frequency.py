class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        dic = {}
        maxFreq = 0
        for i in nums:
            if(i in dic):
                dic[i]+=1
            else:
                dic[i] = 1
            
            maxFreq = max(maxFreq, dic[i])

        
        res = 0
        for i in dic:
            if(dic[i] == maxFreq):
                res += maxFreq
        
        return res
        