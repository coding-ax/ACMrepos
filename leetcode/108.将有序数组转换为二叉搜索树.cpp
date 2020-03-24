/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**
 * 1.题设中给定的是有序数组：
 * 相当于给定了中序遍历的遍历结果
 * 而对于二叉树而言：只有中序加后序或者中序加前序遍历
 * 才能彻底确定一颗二叉树，故答案肯定不唯一
 * 附加条件为两边的高度差不能超过1
 * 2.第一思路，找到中间的根节点，所有左边的全部直接往左子树怼
 * 右边的往右子树怼
 * 3.显然上述做法太过于限定题目
 * 4.做法一：
 * 分治法：
 * 以数组的中间元素作为中间节点，相邻的元素作为左右节点，
 * 构建单个子树
 * 递归对子数组进行相同的操作，直到子数组长度为1
 *时间O(N) 空间O(N))递归栈深度O(logN)
 *
*/
class Solution {
public:
    TreeNode *sorter(int left, int right,vector<int> &nums){
        if(left>right){
            return NULL;
        }
        int mid = (left + right) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = sorter(left, mid - 1,nums);
        root->right = sorter(mid + 1, right, nums);
        return root;
    };
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left = 0,right=nums.size()-1;
        return sorter(left, right, nums);
    }
};
// @lc code=end

