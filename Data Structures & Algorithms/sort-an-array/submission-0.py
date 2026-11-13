class Solution:
    def sortArrayHelper(self,first_half: List[int],second_half: List[int]):
        pass

        
            
    def sortArray(self, nums: List[int]) -> List[int]:
        n = int(len(nums))
        if n<=1:
            return nums
        first_half = self.sortArray(nums[0:n//2])
        second_half = self.sortArray(nums[n//2:n])
        p1 = 0
        p2 = 0
        for i in range(0,len(nums)):
            if p1 < n//2 and p2 < (n-n//2):
                if first_half[p1] < second_half[p2]:
                    nums[i] = first_half[p1]
                    p1 += 1
                else:
                    nums[i] = second_half[p2]
                    p2 += 1
            elif p1 < n//2:
                nums[i] = first_half[p1]
                p1 += 1
            elif p2 < (n-n//2):
                nums[i] = second_half[p2]
                p2 += 1
            else:
                pass


        return nums

        