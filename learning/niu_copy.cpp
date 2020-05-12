#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
struct Cow
{
    int b, e; // 挤奶区间起点和终点
    int No;   // 编号
    bool operator<(const Cow &c) const
    {
        return b < c.b;
    }
} cows[50100];

int pos[50100]; // pos[i]表示编号为i的奶牛去的畜栏编号
struct Stall
{
    int end; // 结束时间
    int No;  // 编号
    bool operator<(const Stall &s) const
    {
        return end > s.end;
    }
    Stall(int e, int n) : end(e), No(n) {}
};
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &cows[i].b, &cows[i].e);
        cows[i].No = i;
    }
    sort(cows, cows + n);
    int total = 0;
    priority_queue<Stall> pq;
    for (int i = 0; i < n; i++)
    {
        if (pq.empty())
        {
            ++total;
            pq.push(Stall(cows[i].e, total));
            pos[cows[i].No] = total;
        }
        else
        {
            Stall st = pq.top();
            if (st.end < cows[i].b)
            { // 端点也不能重合
                pq.pop();
                pos[cows[i].No] = st.No;
                pq.push(Stall(cows[i].e, st.No));
            }
            else
            {
                ++total;
                pq.push(Stall(cows[i].e, total));
                pos[cows[i].No] = total;
            }
        }
    }
    printf("%d\n", total);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", pos[i]);
    }
    return 0;
}
