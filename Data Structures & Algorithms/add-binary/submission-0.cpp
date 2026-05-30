class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int p1 = a.size()-1;
        int p2 = b.size()-1;
        int carry = 0;
        while(p1>=0 or p2>=0 or carry){
            int dig_a = p1>=0 ? a[p1--]-'0':0;
            int dig_b = p2>=0 ? b[p2--]-'0':0;

            int total = dig_a + dig_b + carry;
            res += (total%2) + '0';
            carry = total/2;
        }

        reverse(res.begin(),res.end());
        return res;
    }
};