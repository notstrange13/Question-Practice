class Solution(object):
    def isAnagram(self, s, t):
        # return type bool
        x = sorted(s)
        y = sorted(t)
        s_index = 0
        t_index = 0
        while s_index < len(s):
            if x[s_index] != y[t_index]:
                print("false")
            s_index+=1
            t_index+=1
        print("true")


test1 = "a"
test2 = "ab"

sol = Solution()
sol.isAnagram(test1, test2)
