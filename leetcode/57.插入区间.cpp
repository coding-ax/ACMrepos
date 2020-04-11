/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
         vector<vector<int>> ans;
        //定义标记，用于判断是否重叠部分是否已经加入ans
        bool flag=false;
        for(int i=0;i<intervals.size();i++){
            //首先处理非重叠部分

            //说明仍然在重叠部分的左侧
            if(intervals[i][1]<newInterval[0]){
                //直接往后跳
                ans.push_back(intervals[i]);
                continue;
            }
             //说明此时已经在重叠部分的右侧
            if(intervals[i][0]>newInterval[1]){
                //此时我们已经找到了对应的位置
                //将处理好的新重叠部分丢入，并且通知外部，完成了所有的操作,不再需要插入ans
                ans.push_back(newInterval);
                while(i<intervals.size()){
                  //将剩余元素全部加入ans
                  ans.push_back(intervals[i++]);
                }
                //修改flag
                flag=true;
                //退出循环
                break;
            }

            //非上述情况说明是重叠部分
            //更新重叠部分
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
        }
        if(flag!=true){
            ans.push_back(newInterval);
        }
        return ans;
    }
};
// @lc code=end
