class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();)
        {
            if(val == nums[i])
            {
                nums.erase(nums.begin() + i);
                continue;
            }
            i++;
        }
        return nums.size();
    }
};

