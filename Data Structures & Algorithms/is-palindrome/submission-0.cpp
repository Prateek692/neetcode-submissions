class Solution {
public:
    bool isPalindrome(string s) {
        filterString(s);
        int p1=0;
        int p2=s.size()-1;
        cout<<p2<<"\n";
        while(p1<p2){
            if(s[p1]!=s[p2])
                return false;
            p1++;
            p2--;
        }
        return true;
    }
private:
    void filterString(string &s){
        string t = "";
        for(auto c:s){
            if((c>='0' and c<='9') or (c>='a' and c<='z') or (c>='A' and c<='Z')){
                if(c>='A' and c<='Z')
                    c+=32;
                t+=c;
            }
                
        }
        s=t;
    }
};
