class Solution {
public:
    // int removeDuplicates(vector<int>& nums) {
    //     set<int> s;
    //     for(int i = 0; i<nums.size(); i++){
    //         s.insert(nums[i]);
    //     }

    // int  i = 0;

    // for(int x : s) {
    // nums[i] = x;
    // i++;
    // }

    // return i;
    
    // }

    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }

        
};