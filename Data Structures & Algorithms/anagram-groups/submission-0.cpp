class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        res.clear();
        map<string,vector<string>>mappings;
        for(auto str:strs){
            string val = str;
            sort(str.begin(),str.end());
            string key = str;
            mappings[key].push_back(val);
        }        
        for(auto ele:mappings)
            res.push_back(ele.second);



        return res;
    }
    vector<vector<string>> res;
};
