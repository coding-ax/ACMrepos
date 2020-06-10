#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

queue<int> que;
int main()
{
    int n, target;
    while (cin >> n >> target)
    {
        bool out = false;
        //清空que
        while (!que.empty())
        {
            que.pop();
        }
        //初始化为0
        que.push(0);
        int arr[30];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            //用于剪枝跳出          4 13 1 2 4 7                5 9 1 2 3 4 5

            //用于存储该次的数据
            vector<int> vec;
            while (!que.empty())
            {
                int current = que.front();
                que.pop();

                //拿到读取值
                int no_get = current + 0;
                int get = current + arr[i];
                // cout << "i=" << i << " get:" << get << " no_get:" << no_get << endl;
                //进行剪枝,如果大于就不再丢进去
                //如果等于直接返回
                if (get < target)
                {
                    vec.push_back(no_get);
                    vec.push_back(get);
                    // cout << "i=" << i << " get:" << get << " no_get:" << no_get << endl;
                }
                else if (get == target)
                {
                    cout << "YES" << endl;
                    out = true;
                    break;
                }
                else if (get > target)
                {
                    //get不再入队
                    vec.push_back(no_get);
                }
            }
            for (int j = 0; j < vec.size(); j++)
            {
                // cout << vec[j] << " ";
                que.push(vec[j]);
            }
            if (out)
            {
                break;
            }
        }
        //未找到
        if(!out){
             cout << "NO" << endl;
        }

    }
}
