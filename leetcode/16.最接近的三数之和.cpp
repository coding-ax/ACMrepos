/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int len = nums.size();
        if (len < 3)
            return 0;
        int min = INT_MAX, minLeft = 1, minRight = len - 1, minMiddle = 0;
        //首先进行排序
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len - 1; i++)
        {
            int left = i + 1, right = len - 1;

            //进行查找
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] == target)
                {
                    return nums[i] + nums[left] + nums[right];
                }
                else if (nums[i] + nums[left] + nums[right] < target)
                {
                    if (abs(nums[i] + nums[left] + nums[right] - target) < min)
                    {
                        min = abs(nums[i] + nums[left] + nums[right] - target);
                        minLeft = left;
                        minRight = right;
                        minMiddle = i;
                    }
                    left++;
                }
                //与上相反
                else
                {
                    if (abs(nums[i] + nums[left] + nums[right] - target) < min)
                    {
                        min = abs(nums[i] + nums[left] + nums[right] - target);
                        minLeft = left;
                        minRight = right;
                        minMiddle = i;
                    }
                    right--;
                }
            }
        }
        return nums[minMiddle] + nums[minLeft] + nums[minRight];
    }
};
// @lc code=end
