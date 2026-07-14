class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int i = 0;
        while(1){
            char current = strs[0][i];
            bool matched = true;
            for(auto str:strs){
                if(str.size()<=i or current!=str[i]){
                    matched=false;
                    break;
                }
            }
            if(matched)
                res += current;
            else break;
            i++;
        }
        return res;
    }
};