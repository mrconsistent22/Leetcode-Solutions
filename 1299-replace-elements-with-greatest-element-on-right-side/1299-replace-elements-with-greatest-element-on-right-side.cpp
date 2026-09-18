class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxx= -1;
        for(int i = n-1; i>=0; i--){
            int cur = arr[i];
            arr[i] = maxx;
            maxx = max(cur, maxx);
        }   
        return arr;
    }
};