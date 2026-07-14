class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>hashmap;
        vector<int>res;
        for(int i = 0;i<nums.size();i++){
            int remainder = target - nums[i];
            if(hashmap.find(remainder)!=hashmap.end()){
                res = {hashmap[remainder] , i};
                break;
            }
            hashmap[nums[i]] = i;
        }
        return res;
    }
};
