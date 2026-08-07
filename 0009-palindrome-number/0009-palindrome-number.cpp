class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        long rev = 0;
        int ld = 0;

        while(x > 0){
            ld = x%10;
            x = x/10;
            rev = rev*10 + ld;
        }

        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        else if(rev == dup){
            return true;
        }else {
            return false;
        }

    }
};