class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int el;
        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                el = nums[i];
                count = 1;
            }else if(nums[i] == el){
                count++;
            }else{
                count--;
            }
        }
        return el;


    //     unordered_map<int,int> mpp;
    //     int n = nums.size();

    //     for(int x : nums){
    //         mpp[x]++;
    //     }

    //     for(auto it : mpp){
    //         if(it.second > n/2){
    //             return it.first;
    //         }
    //     }
    // return -1;

    

    }
};