class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        countMap = {}
        n = len(nums)
        for i in nums:
            countMap[i] = countMap.get(i,0) + 1
            if len(countMap) > 2:
                for i,_ in countMap.items():
                    countMap[i] -= 1
                countMap = {i:j for i,j in countMap.items() if j != 0}
        res = []
        countMap = {i:0 for i,_ in countMap.items()}
        print(countMap)
        for i in nums:
            if i in countMap:
                countMap[i] += 1
        res = [i for i,j in countMap.items() if j > n//3]
        return res