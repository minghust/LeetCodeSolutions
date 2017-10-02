/*************************************************************************
	> File Name: solution_goodEfficiency.cc
	> Author: Ming Zhang
	> Created Time: 2017-10-03
 ************************************************************************/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& sums) {
        vector<vector<int>> re;
        if (sums.size() < 3)
            return re;
        sort(sums.begin(), sums.end());
        for (int i = 0; i < sums.size(); i++) {
            if (sums[i] > 0)
                break;
            else if (i > 0 && sums[i] == sums[i - 1])
                continue;
            for (int b = i + 1, e = sums.size() - 1; b < e;) {
                if (sums[b] + sums[e] == -sums[i]) {
                    re.push_back({sums[i], sums[b], sums[e]});
                    while (sums[b] == sums[b + 1]) b++;
                    while (sums[e] == sums[e - 1]) e--;
                    b++;
                    e--;
                }
                else if (sums[b] + sums[e] < -sums[i])
                    b++;
                else
                    e--;
            }
        }

        return re;
    }
};
