class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int j = 0;
        while(j<strs[0].size()){
            char current = strs[0][j];
            bool matched = true;
            for(int i = 0;i<strs.size();i++){
                if(strs[i].size()<j or strs[i][j]!=current){
                    matched = false;
                    break;
                }
            }
            if(matched)
                res+=current;
            else
                break;
            j++;
        }
        return res;
    }
};