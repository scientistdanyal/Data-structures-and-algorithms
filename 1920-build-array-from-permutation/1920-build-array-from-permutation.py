class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        q = len(nums)
        for i, c in enumerate(nums):
            nums[i] = nums[i] + q * (nums[c] % q)
        for i, _ in enumerate(nums):
            nums[i] //= q
            
        return nums
        
        