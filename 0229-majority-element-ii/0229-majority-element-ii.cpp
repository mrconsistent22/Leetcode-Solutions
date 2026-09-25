class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> ans;

        // for(int  i = 0; i<nums.size(); i++){
        //     if(ans.size() == 0 || ans[0] != nums[i]){

        //         int count = 0;
        //         for(int j = 0; j<nums.size(); j++){
        //             if(nums[i] == nums[j]){
        //                 count++;
        //             }
        //         }
        //         if(count > nums.size()/3){
        //             ans.push_back(nums[i]);
        //         }
        //     }
        //     if(ans.size() == 2){
        //         break;
        //     }
        // }
        // return ans;

        // map<int, int> mpp;
        // int threshold = (nums.size())/3 + 1;
        // for(int i = 0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == threshold){
        //         ans.push_back(nums[i]);
        //     }
        //     if(ans.size() == 2){
        //         break;
        //     }
        // }
        // return ans;


    int count1 = 0, count2 = 0;
    int ele1 = 0, ele2 = 0;


    for(int x : nums) {
        if(x == ele1)
            count1++;
        else if(x == ele2)
            count2++;
        else if(count1 == 0) {
            ele1 = x;
            count1 = 1;
        }
        else if(count2 == 0) {
            ele2 = x;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;

    for(int x : nums) {
        if(x == ele1) count1++;
        else if(x == ele2) count2++;
    }

    if(count1 > nums.size() / 3)
        ans.push_back(ele1);

    if(count2 > nums.size() / 3)
        ans.push_back(ele2);

    return ans;
    }
};