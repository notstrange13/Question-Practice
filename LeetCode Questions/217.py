class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        visited = set()
        for i in nums:
            if i in visited:
                print("true")
            visited.add(i)
        print("false")


test = [1, 2, 3, 1]
test1 = Solution()
test1.containsDuplicate(test)



