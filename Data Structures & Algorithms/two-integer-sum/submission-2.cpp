class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        occurence_indices.clear();
        vector<int>res = {0,0};
        for(int i=0;i<nums.size();i++)
            occurence_indices[nums[i]].push_back(i);
        
        for(const auto ele:occurence_indices){
            int diff = target - ele.first;
            if(occurence_indices.find(diff)!=occurence_indices.end()){
                if(diff==ele.first)
                    res = {ele.second[0],ele.second[1]};
                else{
                    int a = min(ele.second[0],occurence_indices[diff][0]);
                    int b = max(ele.second[0],occurence_indices[diff][0]);
                    res = {a,b};
                }
                    
                sort(res.begin(),res.end());
                return res;
            }   
        }
        return res;
    }
    map<int,vector<int>>occurence_indices;
};
