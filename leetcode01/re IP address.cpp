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

const int maxn = 110;
const int INF = 0x3f3f3f3f;
void prin(int  val){
    cout<<val<<" ";
}
int main()
{
    ios::sync_with_stdio(false);
    queue<int> que;
    vector<int> qq;
    qq.insert(qq.begin(), 78);
    qq.insert(qq.begin(), 8);
    qq.insert(qq.begin(), 8);
    qq.insert(qq.begin(), 98);
    for_each(qq.begin(),qq.end(),prin);
    que.push(1);
    que.push(2);
    que.push(2);
    que.push(3);
    int temp = que.front();
    cout << temp << endl;
    system("pause");
    return 0;
}
