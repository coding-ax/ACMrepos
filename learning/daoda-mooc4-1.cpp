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
int a[maxN];
/**
 * 思路一：
 * 1.设置当前可接导弹的系统
 * 2.当前可以接，就用当前链条最长的接导弹
 * 3.否则按照长度大小排序的情况，依次判断是否可以接住导弹
 * 4.均无法接住导弹则开启新系统
 * 5.打印最终最长的那个系统
 *
 * (证实该思路错误)
*/
/*
struct syst
{
    int length; //当前系统已经拦截的导弹数目
    int min;    //当前系统已经导弹中的最低高度
};
//优先按照长度排序，长度相等则先把min大的放前面
bool cmp(const syst &a, const syst &b)
{
    if (a.length > b.length)
    {
        return true;
    }
    else if (a.length == b.length)
    {
        if (a.min > b.min)
        {
            return true;
        }
        else
            return false;
    }
    else if (a.length < b.length)
    {
        return false;
    }
};

int main()
{
    int n;
    while (cin >> n)
    {
        //数组a用于存储导弹系统
        //数组sys用于保存当前系统的长度
        //cur用于表示已经开了多少个新系统

        int cur = 0;
        syst sys[maxN];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sys[i].length = 0;
            sys[i].min = INT_MAX;
        }

        for (int i = 0; i < n; i++)
        {
            //按长度顺序判断当前是否可以接下导弹
            int flag = false; //用于判断是否接住
            for (int j = 0; j < cur; j++)
            {
                //当前有系统可以接住
                if (sys[j].min >= a[i])
                {
                    //更新该系统,同时退出循环
                    sys[j].length++;
                    sys[j].min = a[i];
                    flag = true;
                    break;
                }
            }
            //如果当前接不住
            if (!flag)
            {
                sys[cur].length = 1;
                sys[cur++].min = a[i];
            }
            for (int k = 0; k < cur; k++)
            {
                cout << "current:sys[" << k << "] 's length is "
                     << sys[k].length << endl
                     << " the min is " << sys[k].min << endl;
            }
            //重新进行排序,以便于下一次统计
            sort(sys, sys + cur, cmp);
        }
        cout << sys[0].length << endl;
    }
    *
     * 8
300 207 155 300 299 170 158 65

    system("pause");
    return 0;
}
*/

/**
 * 思路二：
 * 1.该题目实际上是寻找最长非递增子序列
 * 2.动态规划思路：从最后的数据开始往前找，并用dp[i]表示
 * 第i个元素后方比它小的数据个数
 * 3.利用动态规划，只需要在后方找到比当前元素小的，
 * 并加上后方较小元素的dp[j]值
*/
int main()
{
    int n;
    while (cin >> n)
    {
        //数组a用于存储导弹系统
        int dp[maxN];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[i] = 1;
        }
        for (int i = n - 1; i >= 0;i--){
            int DPmax = 0;
            for (int j = i + 1; j < n;j++){
                //寻找后面满足条件且dp最大的那个位置
                if(a[i]>=a[j]&&dp[j]>DPmax){
                    DPmax = dp[j];
                }
            }
            dp[i] = DPmax + 1;//dp[i]=1
        }
        //寻找dp最大的位置
        int max = 0;
        for (int i = 0; i < n;i++){
            if(dp[i]>max){
                max = dp[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}
