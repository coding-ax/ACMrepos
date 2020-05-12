#include <iostream>
#include <algorithm>
using namespace std;
struct niu
{
    int start, end;
    int place = 0;
    int raw;
};

bool cmp(niu a, niu b)
{
    // if (a.start == b.start)
    // {
    //     return a.end < b.end;
    // }
    return a.start < b.start;
}
//回归原序列
bool cmp2(niu a, niu b)
{
    return a.raw < b.raw;
}
niu a[50050];
niu counter[50050];
int main()
{
    int n;
    while (cin >> n)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].start >> a[i].end;
            a[i].raw = i;
        }
        //  先进行排序
        sort(a, a + n, cmp);
        // 遍历寻找
        for (int i = 0; i < n; i++)
        {
            int flag = false;
            //判断前面的牛栏可否容纳
            for (int j = 1; j <= count; j++)
            {
                //找到了可以容纳的牛栏
                if (counter[j].end <= a[i].start)
                {
                    //更新对应位置
                    flag = true;
                    counter[j].end = a[i].end;
                    a[i].place = j;
                }
            }
            //如果找不到
            if (!flag)
            {
                count++;
                counter[count] = a[i];
                a[i].place = count;
            }
        }
        //回归
        sort(a, a + n, cmp2);
        cout << count << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i].place << endl;
        }
    }
}
