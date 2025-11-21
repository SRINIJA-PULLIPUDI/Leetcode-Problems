class Solution:
    def maximumLength(self, s: str) -> int:
        d = {}
        for i in range(len(s)):
            for j in range(i,len(s)):
                c = s[i:j+1]
                if c.count(c[0])==len(c):
                    if c in d:
                        d[c]+=1
                    else:
                        d[c] = 1
        m = -1
        for i in d:
            if d[i]>=3:
                m = max(m,len(i))
        print(d)
        return m
