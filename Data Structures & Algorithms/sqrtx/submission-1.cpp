class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x;
        int ans = 0;
        while(left<=right){
            long long mid = left + (right-left)/2;
            long long sqr = mid*mid;
            if(sqr>x)
                right = mid - 1;
            else if(sqr<x){
                left = mid + 1;
                ans = mid;
            }
            else
                return mid;
        }
        return ans;
    }
};