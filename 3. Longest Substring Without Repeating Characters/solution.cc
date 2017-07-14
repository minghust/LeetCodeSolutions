class Solution{
public:
    int lengthOfLongestSubstring(string s) {
        int ary[128]; // for ASCII code usage
        for(int i=0; i<128; i++)
            ary[i] = -1;
        int flag = -1;
        int length = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(ary[s[i]] > flag)
            {
                flag = ary[s[i]];
            }
            ary[s[i]] = i; // every character's latest position
            length = max(length, i-flag);
        }
        return length;
    }
};
