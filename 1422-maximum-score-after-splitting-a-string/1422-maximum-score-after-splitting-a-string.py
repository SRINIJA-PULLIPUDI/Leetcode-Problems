class Solution:
    def maxScore(self, s: str) -> int:
        m = 0
        for i in range(len(s)-1):
            a = s[0:i+1]
            b = s[i+1:len(s)]
            m = max(m,a.count('0')+b.count('1'))
        return m