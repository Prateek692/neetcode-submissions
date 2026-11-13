class Solution:
    

    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        left_ptr = 0
        right_ptr = len(nums) - 1
        if right_ptr <= 0:
            return 
        def swap(i,j):
            tmp = nums[i]
            nums[i] = nums[j]
            nums[j] = tmp

        while i <= right_ptr:
            if nums[i] == 0:
                swap(i,left_ptr)
                left_ptr += 1
            elif nums[i] == 2:
                swap(i,right_ptr)
                right_ptr -= 1
                i -= 1
            i += 1

            
            