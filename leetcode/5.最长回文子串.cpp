/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution
{
public:
    /**
 * 中心扩散算法：
 * +动态规划：
*/
    string longestPalindrome(string s)
    {
        //中心扩散
        // int len = s.length();
        // if (len < 1)
        // {
        //     return s;
        // }
        // int left = 0,
        //     cur = 1,
        //     right = 0,
        //     maxLen = 0,
        //     maxStart = 0;

        // for (int i = 0; i < len; i++)
        // {
        //     cur = 1;
        //     left = i - 1;
        //     right = i + 1;
        //     while (left > -1 && s[left] == s[i])
        //     {
        //         cur++;
        //         left--;
        //     }
        //     while (right < len && s[right] == s[i])
        //     {
        //         cur++;
        //         right++;
        //     }
        //     while(left > -1 &&right < len &&s[left] ==s[right]){
        //         cur += 2;
        //         right++;
        //         left--;
        //     }
        //     if(cur>maxLen){
        //         maxLen = cur;
        //         maxStart = left+1;
        //     }
        // }
        // //cout << maxStart << " " << maxLen << endl;
        // return s.substr(maxStart,  maxLen);


        //bacab 必须使用memset设置为false
        //动态规划加中心扩散
        const int len = s.length();
        if (len < 2)
        {
            return s;
        }
        int maxLen = 1,
            maxStart = 0;
        bool dp[len][len];
        memset(dp, false, sizeof(dp));
        for (int right =1; right < len; right++)
        {
            for (int left = 0; left < right; left++)
            {
                if (s[left] == s[right] && (right - left <= 2 || dp[left + 1][right - 1]==true))
                {
                    dp[left][right] = true;
                    if (right - left + 1 > maxLen)
                    {
                        maxLen = right - left + 1;
                        maxStart = left;
                    }
                }
            }
        }
        // cout << maxStart << " " << maxLen << endl;
        return s.substr(maxStart, maxLen);
    };
};
// @lc code=end
