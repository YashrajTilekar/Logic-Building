class Solution(object):
    def decompressRLElist(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        Result = list()

        for Cnt in range(0 ,len(nums)-1 ,2):
            freq = nums[Cnt]
            val = nums[Cnt + 1]
            
            for i in range(1 , freq+1 ,1):
                Result.append(val)
        
        return Result