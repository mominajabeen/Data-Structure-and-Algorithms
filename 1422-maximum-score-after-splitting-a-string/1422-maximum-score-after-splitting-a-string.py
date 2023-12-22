# class Solution:
#     def maxScore(self, s: str) -> int:
#         zeroCount = 1 if s[0]=='0' else 0
#         oneCount = sum([int(n) for n in s[1:]])
#         maxCount = zeroCount + oneCount

#         for n in s[1:len(s)-1]:
#             if n=='0':  zeroCount+=1
#             else:   oneCount-=1
#             maxCount = max(maxCount, zeroCount + oneCount)
#         return maxCount
class Solution:
    def maxScore(self, s: str) -> int:
        left, right = s, s

        ans = 0
        for i in range(1, len(s)):
            left = s[:i]
            right = s[i:]

            counts1 = Counter(left)
            counts2 = Counter(right)
            ans = max(ans, counts1['0'] + counts2['1'])
        return ans