class Solution {
public:
    bool isValid(string s) {
        vector<char>stk;
        for(auto x:s){
            if(x=='[' or x=='(' or x=='{' or stk.empty())
                stk.push_back(x);
            else{
                char last = stk.back();
                if((x==']' and last=='[') or (x==')' and last=='(') or (x=='}' and last=='{'))
                    stk.pop_back();
                else
                    stk.push_back(x);
            }
        }
        return stk.empty();
    }
};
