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

        // if(nums.empty()) return 0;
        // int longest = 1;
        // unordered_set<int> st;
        // for(int  i = 0; i<nums.size(); i++){
        //     st.insert(nums[i]);
        // }

        // for(auto it : st){
        //     if(st.find(it - 1) == st.end()){
        //         int count = 1;
        //         int x=it;

        //         while(st.find(x+1) != st.end()){
        //             x++;
        //             count++;
        //         }
        //         longest = max(longest, count);
        //     }
        // }
        // return longest;
    }
};