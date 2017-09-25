class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int cmp = 0;
        int tmp = x;
        while(tmp){
            cmp = cmp * 10 + tmp%10;
            tmp /= 10;
        }
        return cmp == x;
    }
};
