class Solution:
    def maxScore(self, nums: List[int]) -> int:
        m = 0
        if(len(nums)) == 1:
            return nums[0]*nums[0]
        if(len(nums)) == 2:
            b = nums[1]*nums[1]
            c = nums[0]*nums[1]
            a = nums[0]*nums[0]
            return max(a,b,c)
        l,g = nums[0],nums[0]
        for i in range(1,len(nums)):
            l = lcm(l,nums[i])
            g = gcd(g,nums[i])
        m = max(m,g*l)
        for i in range(len(nums)):
            x = nums[:i]+nums[i+1:]
            l1,g1 = x[0],x[0]
            for j in range(len(x)):
                l1 = lcm(l1,x[j])
                g1 = gcd(g1,x[j])
            m = max(m,g1*l1)
        return m