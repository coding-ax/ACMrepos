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
/*
思路：
1.先思考，举个栗子：
假设n=5,p=2
R： 1 2 3 4 5
转化后R':3 4 5 1 2
下标切换：0->3 2->4 3->1 4->2 5->3

2.分析：
每一项的对应下标k，当k<p时:k'=n-p+k 当k>=p时： k'=k-p
3.做法：
所以只需要将每一项都移动到对应的位置即可，
而移动的时候，当移动某项到对应的位置后，马上进行对应项的移动
4.分析：
故空间复杂度O（1）,时间复杂度O（n)
*/

//寻找对应的位置
int matchIndex(int index, int p, int n)
{
    return index < p ? n - p + index : index - p;
}
char R[maxN];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n)
    {
             int p;
        cin >> p;
              //鲁棒修改P
        p=p%n;
        for (int i = 0; i < n; i++)
        {
            cin >> R[i];
        }



        //初始化，定义当前位置从0开始
        int currentIndex = 0;
        int currentNum = R[currentIndex];
        //进行每一项的移动
        for (int i = 0; i < n; i++)
        {
            //拿到对应位置的下标以及数据
            int tempIndex = matchIndex(currentIndex, p, n);
            int tempNum = R[tempIndex];
            //修改对应位置数据，并将对应位置修改为当前位置
            R[tempIndex] = currentNum;
            currentIndex = tempIndex;
            currentNum = tempNum;
        }
        //查看结果
        for (int i = 0; i < n; i++)
        {
            cout << R[i];
        }
    }
    system("pause");
    return 0;
}
