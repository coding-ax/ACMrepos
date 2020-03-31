/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            //小于target，说明left偏左
            if (numbers[left] + numbers[right] < target)
            {
                left++;
            }
            else if (numbers[left] + numbers[right] == target)
            {
                return {left + 1, right + 1};
            }
            //大于target，说明right偏右
            else
            {
                right--;
            }
        }
        return {-1, -1};
    }
};
// @lc code=end
