/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *p,*q;
    int *re = (int *)malloc(sizeof(int) * 2);
    for(p = nums;numsSize--;p++)
    {
        int tmp = numsSize;
        for(q = p + 1;tmp--;q++)
        {
            if(*p + *q == target)
            {
                re[0] = p-nums;
                re[1] = q-nums;
                return re;
            }
        }
    }
    return NULL;
}
