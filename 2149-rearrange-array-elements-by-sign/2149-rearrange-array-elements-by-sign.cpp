class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0;
        int j = 1;
        vector<int> ans(nums.size());
        for(int num : nums){
            if(num < 0){
                ans[j] = num;
                j+=2;
            }
            else{
                ans[i] = num;
                i+=2;
            }
        
        }
        return ans;
    }
};