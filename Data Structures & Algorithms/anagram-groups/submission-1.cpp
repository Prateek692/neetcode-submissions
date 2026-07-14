class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>hashmap;
        vector<vector<string>> res;
        for(auto str:strs){
            vector<int>freq(26,0);
            for(auto c:str)
                freq[c-'a']++;
            hashmap[freq].push_back(str);
        }
        for(auto x:hashmap)
            res.push_back(x.second);
        return res;
    }
};
