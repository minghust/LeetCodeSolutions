/*************************************************************************
	> File Name: goodEffective_solution.cc
	> Author: Ming Zhang
	> Created Time: 2017-10-03
 ************************************************************************/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
  		return distance(nums.begin(), unique(nums.begin(), nums.end())); 
    }
};
