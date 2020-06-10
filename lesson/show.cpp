#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

const int maxN = 110;
const int INF = 0x3f3f3f3f;










class Solution {
public:
    //中心扩展带#号类型字符并返回p[left]
    int expand(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left;
            ++right;
        }
        return (right - left - 2) / 2;
    }
    string longestPalindrome(string s) {
        int start = 0, end = -1;
        //对s进行处理 使得s = #a#b#c# 的形式
        string t = "#";
        for (char c: s) {
            t += c;
            t += '#';
        }
        t += '#';
        s = t;
        //利用arm_len作为动态规划的依据
        vector<int> arm_len;
        //初始化下标
        int right = -1, j = -1;
        for (int i = 0; i < s.size(); ++i) {
            //遍历查找
            int cur_arm_len;
            //首先进行条件判断：
            //1.right（臂长）可以盖过下一个位置i则跳过重复计算，利用保存值， 否则就对i进行中心扩展寻找新的臂长
            if (right >= i) {
                int i_sym = j * 2 - i;
                int min_arm_len = min(arm_len[i_sym], right - i);
                cur_arm_len = expand(s, i - min_arm_len, i + min_arm_len);
            }
            else {
                cur_arm_len = expand(s, i, i);
            }
            arm_len.push_back(cur_arm_len);
            //更新right
            if (i + cur_arm_len > right) {
                j = i;
                right = i + cur_arm_len;
            }
            if (cur_arm_len * 2 + 1 > end - start) {
                start = i - cur_arm_len;
                end = i + cur_arm_len;
            }
        }
        string ans;
        for (int i = start; i <= end; ++i) {
            if (s[i] != '#') {
                ans += s[i];
            }
        }
        return ans;
    }
};













int main(){
    ios::sync_with_stdio(false);

    system("pause");
    return 0;
}
