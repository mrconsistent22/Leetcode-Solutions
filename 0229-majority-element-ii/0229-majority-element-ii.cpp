class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;

        for(int  i = 0; i<nums.size(); i++){
            if(ans.size() == 0 || ans[0] != nums[i]){

                int count = 0;
                for(int j = 0; j<nums.size(); j++){
                    if(nums[i] == nums[j]){
                        count++;
                    }
                }
                if(count > nums.size()/3){
                    ans.push_back(nums[i]);
                }
            }
            if(ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};