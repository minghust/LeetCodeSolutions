/*************************************************************************
	> File Name: solution.cc
	> Author: Ming Zhang
	> Created Time: 2017-10-05
 ************************************************************************/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>re{-1, -1};
        if(nums.size() == 0)
            return re;
        vector<int>::iterator it1, it2;
        if((it1 = find(nums.begin(), nums.end(), target)) == nums.end())
            return re;
        else
        {
            re[0] = it1 - nums.begin();
            if((it1+1) == nums.end()){
                re[1] = re[0];
                return re;
            }
                
            while(*it1 == target)   
                it1++;
            re[1] = it1-nums.begin() - 1;
        }
        return re;
    }
};
