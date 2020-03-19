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
/**
 * 函数merge表示两个子数组归并的过程
 * 函数merge_sort表示整体归并函数
 * int low 左边 high 右边 mid中间 aux中间数组 待排序数组a
 * aux定义在全局，节省消耗
*/
int aux[maxN];
void merge(int *a, int low, int mid, int high)
{
    //拷贝a[i]，便于进行原地转换
    for (int i = low; i <= high; i++)
    {
        aux[i] = a[i];
    }

    int i = low,
        j = mid + 1;
    for (int k = low; k <= high; k++)
    {
        if (i <= mid && j <= high)
        {
            if (aux[i] <= aux[j])
                a[k] = aux[i++];
            else
                a[k] = aux[j++];
        }
        else if (j > high)
            a[k] = aux[i++];
        else
            a[k] = aux[j++];
    }
}

/*
 * 自顶向下：
*/
void merge_sort(int *a,int low,int  high){
    if(a==NULL||low>=high)
        return;
    int tempIndex = low + (high - low) / 2;
    merge_sort(a, low, tempIndex);
    merge_sort(a, tempIndex + 1, high);

    merge(a,low,tempIndex,high);
}
int main()
{
    ios::sync_with_stdio(false);
    int a[] = {5, 6, 7, 1, 2, 8, 6, 7, 2, 6, 48, 9};
    merge_sort(a, 0, sizeof(a) / sizeof(a[0])-1);
    //  cout << "here" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]);i++){
        cout << a[i]<<" ";
    }
    // cout << "here" << endl;
    system("pause");
    return 0;
}
