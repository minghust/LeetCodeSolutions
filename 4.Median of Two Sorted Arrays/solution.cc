class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto p = nums1.begin(), pend = nums1.end();
        auto q = nums2.begin(), qend = nums2.end();
        int flag = (nums1.size() + nums2.size())%2;
        int count = (nums1.size() + nums2.size()) / 2 + 1;
        int i;
        double midnum;
        int tmp = 0;
        for(i=0; i<count; i++)
        {
            if(p!=pend && q!=qend)
            {
                if(*p <= *q)
                {
                    midnum = *p;
                    p++;
                }
                else
                {
                    midnum = *q;
                    q++;
                }
            }
            else if(p!=pend)
            {
                midnum = *p;
                p++;
            }
            else if(q!=qend)
            {
                midnum = *q;
                q++;
            }
            if(!flag && i==count-2)
                tmp = midnum;
        }
        if(!flag)
            midnum = (tmp + midnum) / 2.0;
        return midnum;
    }
};
