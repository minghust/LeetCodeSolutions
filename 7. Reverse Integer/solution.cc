class Solution {
public:
    int reverse(int x) {
        unsigned long long res = 0, temp;
        temp = x > 0 ? x : -x;
        while(temp){
            res = res * 10 + temp % 10;
            temp /= 10;
        }
        if(x>0){
            if(res > 0x7fffffff)
                return 0;    
        }
        else if(x<0){
            if(res > 0x7fffffff)
                return 0;
        }
        return x > 0? res : -res;
    }
};
