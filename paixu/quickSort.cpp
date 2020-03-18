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
void quickSort(int arrs[], int low, int high)
{
    //递归出口：
    if (low < high)
    {
        //通过i,j存储low与high，并以第一个数据作为基准值key
        int i = low;
        int j = high;
        int key = arrs[low];
        //每一次操作都是以i,j是否相遇作为结束条件，相遇则代表两边都已经完成操作
        while (i < j)
        {
            //从后往前扫描，若是遇到了比key小的，则循环会退出，并且当前j会指向该元素的位置
            while (i < j && arrs[j] >= key)
                j--;
            //将找到的元素放到i指向的位置，并让i指向下一个位置
            if (i < j)
                arrs[i++] = arrs[j];
            //重复与上面类似的操作
            while (i < j && arrs[i] < key)
            {
                i++;
            }
            if (i < j)
            {
                arrs[j--] = arrs[i];
            }
        }
        //这是指针已经相遇，则此位置即为key所在的位置
        arrs[i] = key;
        //我们得到的新数组，其位置下标就是[low,i-1]与[i+1,high]，进行递归调用
        quickSort(arrs, low, i - 1);
        quickSort(arrs, i + 1, high);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    // int arr[] = {5, 1, 3, 8, 4, 9, 4, 6, 8, 1, 8, 48, 8};
    int arr[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
    cout << "size:" << sizeof(arr) / sizeof(arr[0]) << endl;
    quickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
        cout << arr[i] << " ";
    cout << "c";
    system("pause");
    return 0;
}
