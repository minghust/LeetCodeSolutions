/*************************************************************************
	> File Name: solution_badEfficiency.cc
	> Author: Ming Zhang
	> Created Time: 2017-10-03
 ************************************************************************/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> re;
        if(nums.size() < 3)
            return re;
        set<vector<int>> se;
        vector<int>tmp;
        sort(nums.begin(), nums.end());
        int i, j;
        for(i=0; i < nums.size()-1;i++)
        {
            for (j = i+1; j < nums.size(); j++)
            {
                int n = -(nums[i]+nums[j]);
                if(binary_search(nums.begin()+j+1, nums.end(), n))
                {
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(n);
                    sort(tmp.begin(), tmp.end());
                    se.insert(tmp);
                }
                tmp.clear();
            }
        }

        for(auto it = se.begin(); it != se.end(); it++)
            re.push_back(*it);
        return re;
    }
};
