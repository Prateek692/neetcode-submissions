class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        set_nums = set(nums)
        res = 1
        for i in nums:
            if i-1 not in set_nums:
                to_find = i+1
                sequence = 1
                while to_find in set_nums:
                    to_find += 1
                    sequence += 1

                res = max(sequence,res)
        return res