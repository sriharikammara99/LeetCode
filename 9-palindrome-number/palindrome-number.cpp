class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;

        int dup = x;
        long long reverse = 0;

        while(x > 0) {

            int ld = x % 10;
            reverse = reverse * 10 + ld;
            x = x / 10;
        }

        return dup == reverse;
    }
};