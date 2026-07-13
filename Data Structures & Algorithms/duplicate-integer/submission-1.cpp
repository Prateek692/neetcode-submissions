class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>hashset;
        hashset.insert(nums.begin(),nums.end());
        return nums.size()!=hashset.size();
    }
};