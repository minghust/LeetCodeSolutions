/*************************************************************************
	> File Name: solution.cc
	> Author: Ming Zhang
	> Created Time: 2017-10-03
 ************************************************************************/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        for(auto it=nums.begin(); it!=nums.end()-1;)
        {
            if(*(it+1) == *it)
                nums.erase(it+1);
            else
                it++;
        }
        return nums.size();
    }
};
