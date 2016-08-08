//Question : Given an array of integers, return indices of the two numbers such that they add up to a specific target.You may assume that each input would have exactly one solution.
//Example  : Given nums = [2, 7, 11, 15], target = 9,
//           Because nums[0] + nums[1] = 2 + 7 = 9,
//           return [0, 1].
//Updates  : UPDATE (2016/2/13):
//           The return format had been changed to zero-based indices. Please read the above updated description carefully.
//Code by  : DyleRays
//Time     : 2016/06/01

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int i,j;
    int* pRes = malloc(2*sizeof(int));
    for(i=0; i<numsSize; i++)
    {
        for(j = i + 1; j<numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                pRes[0] = i;
                pRes[1] = j;
            }
        }
    }
    return pRes;
}
