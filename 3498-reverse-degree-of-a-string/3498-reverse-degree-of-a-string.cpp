class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int  i = 0; i<s.size(); i++){
            int pos = i+1;
            int rev = 'z' - s[i] + 1;
            sum = sum + pos*rev;
            // pos = 0;
            // rev = 0;
        }
        return sum;
    }
};