class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int sum;
        // for(int  i = 0; i<nums.size(); i++){
        //     sum=0;
        //     for(int j = i + 1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};

    // map<int, int> mpp;
    // for(int i = 0; i<nums.size(); i++){
    //     int more = target - nums[i];
    //     if(mpp.find(more) != mpp.end()){
    //         return {mpp[more], i};
    //     }
    //     mpp[nums[i]] = i;
    // }
    // return {};


    vector<pair<int, int>> arr;

    for(int i = 0; i < nums.size(); i++) {
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = nums.size() - 1;

    while(i < j){
        int sum = arr[i].first + arr[j].first;
        if(sum == target){
            return {arr[i].second, arr[j].second};
        }
        else if(sum < target) i++;
        else j--;
    }
    return {};


    }
};