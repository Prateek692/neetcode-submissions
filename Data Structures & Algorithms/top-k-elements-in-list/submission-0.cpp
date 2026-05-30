class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        int freq[2001];
        
        for(const auto &num:nums)
            freq[num+1000]++;

        while(k--){
            int max_freq = -1;
            int num = -5000;
            for(int i=0;i<=2000;i++){
                if(freq[i]>max_freq){
                    max_freq = freq[i];
                    num = i;
                }
            }
            res.push_back(num-1000);
            freq[num] = 0;
        }

        return res;
    }
};
