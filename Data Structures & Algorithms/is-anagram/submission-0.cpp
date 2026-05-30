class Solution {
public:
    bool isAnagram(string s, string t) {
        occurences.clear();
        for(const char x: s)
            occurences[x]++;
        for(const char x: t)
            occurences[x]--;
        for(const auto map_ele:occurences){
            if(map_ele.second)
                return false;
        }
        return true;
    }
private:
    map<char,int> occurences;
};
