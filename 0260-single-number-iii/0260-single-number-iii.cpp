class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int num : nums) {
            mpp[num]++;
        }

        vector<int> ans;

        for(auto it : mpp) {
            if(it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};