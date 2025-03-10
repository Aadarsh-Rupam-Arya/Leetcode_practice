class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int max_one = 0 ;   
        int r = 0 , l = 0 ;
        int zero  = 0 ;
        while(r < n){
           
            if(nums[r] == 0) {
                zero++;
            }

            if(zero > k){
                if(nums[l] == 0) zero--;
                l++;
            }
            
            int len = r - l + 1;
            max_one = max(max_one,len);
                
            
            r++;       
        }  
        return max_one;
    }
};