class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = (n*(n+1))/2;
        // int asum = 0;
        // for(int i = 0; i<n; i++){
        //     asum = asum + nums[i];
        // }
        // //int ans = sum - asum;
        // return sum - asum;

        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            xor1 = xor1^nums[i];
            xor2 = xor2^(i);
        }
        xor2 = xor2^(n);

        return (xor1^xor2);
    }
};