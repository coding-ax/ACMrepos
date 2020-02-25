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
/*
*思路：
*
无序数组，必须成为有序数组，具体在于排序算法的实现：
1.常规排序（调用STL的sort) 时间复杂度O(nlogn),空间(原数组空间)
2.桶排序（利用数组元素大小作为数组索引）时间复杂度On,空间取决于元素大小（O（n))

具体实现：
一.（调用sort）
1.定义int min=1，
2.遍历扫描处理后的有序数组，
3.遇到（min==a[i]，则使min++）
4.扫描结束，打印min

二.（桶排序）
1.定义新数组b[maxn]，并将所有的元素初始化为0
2.扫描数组，利用数组下标作为新数组下标索引（桶排序）
3.扫描新数组，找到第一个初始化元素0的位置，并打印此位置的索引加1
*
*
*/
const int maxn = 110;
const int INF = 0x3f3f3f3f;
bool cmp(int x,int y){
    return x < y;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    int a[maxn];
    // while(cin>>n){
    //     //依次输入数组元素：
    //     for (int i = 0; i < n;i++){
    //         cin >> a[i];
    //     }
    //     //将无序数组变为有序数组
    //    sort(a, a+n,cmp);
    //     int min = 1;
    //     for (int i = 0; i < n;i++){
    //         //判断变更min的时机
    //         if(a[i]==min){
    //             min++;
    //         }
    //     }
    //     cout << min << endl;
    // }

    while(cin>>n){
        //依次输入数组元素：
         memset(a, 0, sizeof(a));
        for (int i = 1; i <=n;i++){
            //进行桶排序：
            int count;
            cin >> count;
            //因为所求为正整数，0及以下可以排除
            if(count>0){
                   a[count] = count;
            }
        }
        //扫描新数组
        for (int i = 1; i < maxn;i++){
            //找到第一个未插入的位置，打印其索引即为所求（遍历下标从1开始）
            if(a[i]==0){
                cout << i  << endl;
                break;
            }
        }
    }
    system("pause");
    return 0;
}
