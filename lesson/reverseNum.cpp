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
int aux[maxN];

int  merge(int *a, int low, int mid, int high)
{
    int countNum = 0;
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
            {
                a[k] = aux[j++];
                countNum+=j-k-1;
            }
        }
        else if (j > high)
            a[k] = aux[i++];
        else
            a[k] = aux[j++];
    }
    return countNum;
}

/*
 * 自顶向下：
*/
int  merge_sort(int *a, int low, int high)
{
    if (a == NULL || low >= high)
        return 0;
    int tempIndex = low + (high - low) / 2;
    int countW=0;
   countW+= merge_sort(a, low, tempIndex);
     countW+= merge_sort(a, tempIndex + 1, high);

   countW+= merge(a, low, tempIndex, high);
   return countW;
}
int a[100];
int main()
{
    ios::sync_with_stdio(false);
    while (true)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << merge_sort(a, 0, n - 1)<< endl;
    }

    system("pause");
    return 0;
}
