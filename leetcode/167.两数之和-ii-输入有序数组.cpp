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
        vector<int> ans;
        if (numbers.size() < 2)
        {
            return ans;
        }
        int left = 0, right = numbers.size() - 1;
        while (left < right)
        {
            //小于target，说明left偏左
            // cout << "left:" << left << " "
            //      << "right:" << right << endl;
            if (numbers[left] + numbers[right] < target)
            {
                left++;
            }
            else if (numbers[left] + numbers[right] == target)
            {
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                break;
            }
            //大于target，说明right偏右
            else
            {
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end
