/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * 排序加双指针：
 * 排序后:
 * left指向最小元素，i指向中间元素，right指向最大元素
 * 要求leftV+rightV+iV==0
 *
*/
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int len = nums.size();
        vector<vector<int>> ans;
        // cout << len << endl;
        if (len < 3)
            return ans;
        //首先进行排序
        sort(nums.begin(), nums.end());
            for (int i = 0; i < len - 1; i++)
            {
                //循环去重
                //此处是－1，因为已经统计过寻找过的
                //没有必要再次寻找，且能解决重复问题
                if (i > 0 && nums[i] == nums[i - 1])
                {
                    continue;
                }
                //i值向最小的值，left从左开始，right往右边开始
                if (nums[i] > 0)
                    break;
                int left = i + 1, right = len - 1;

                //进行查找
                while (left < right)
                {
                    if (nums[i] + nums[left] + nums[right] == 0)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[left]);
                        temp.push_back(nums[right]);
                        ans.push_back(temp);
                        //遇到相同的值直接跳过，调到最后的位置
                        // cout << i << " " << left << " " << right << endl;
                        //循环去重
                        while (left < right && nums[left] == nums[left + 1])
                        {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right - 1])
                        {
                            right--;
                        }
                        //如果还未相撞，继续寻找其他可能性：
                        left++;
                        right--;
                    }
                    //如果相加之和小于0，说明left偏小，需要往后移动
                    else if (nums[i] + nums[left] + nums[right] < 0)
                    {
                        left++;
                    }
                    //与上相反
                    else
                    {
                        right--;
                    }
                }
            }
        return ans;
    }
};
// @lc code=end
