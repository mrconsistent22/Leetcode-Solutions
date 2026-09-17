class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //int maxx = INT_MIN;
        // for(int i = 0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j = i; j<nums.size(); j++){
        //         sum += nums[j];
        //         maxx = max(sum, maxx);
        //     }
        // }
        // return maxx;

        int sum = 0;
        int maxx = INT_MIN;
        for(int  i = 0; i<nums.size(); i++){
            sum += nums[i];
            if(sum > maxx){
                maxx = sum;
            }
            if(sum < 0 ){
                sum = 0;
            }
        }
        return maxx; 
    }
};