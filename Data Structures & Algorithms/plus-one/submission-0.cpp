class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        for(int i=digits.size()-1;i>=0;i--){
            // if(i==digits.size()-1){
            //     digits[i]++;
            //     if(digits[i]>9){
            //         digits[i]%=10;
            //         carry=true;
            //     }
            //     else 
            //         carry = false;
            // }
            // else{
            //     if(carry)
            //         digits[i]++;
            //     if(digits[i]>9){
            //         digits[i]%=10;
            //         carry=true;
            //     }
            //     else 
            //         carry = false;
            // }
            
                if(carry or i==digits.size()-1)
                    digits[i]++;
                
                if(digits[i]>9){
                    digits[i]%=10;
                    carry=true;
                }
                else 
                    carry = false;
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
