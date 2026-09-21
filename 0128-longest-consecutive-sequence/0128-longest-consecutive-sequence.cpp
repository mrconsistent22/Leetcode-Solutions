class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int lastSmall = INT_MIN;
        int count = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]-1 == lastSmall){
                count++;
                lastSmall = nums[i];
            }else if(nums[i] == lastSmall){
                continue;
            }else{
                count = 1;
                lastSmall = nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};