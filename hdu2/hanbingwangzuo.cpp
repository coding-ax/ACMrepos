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

using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
{
    int count;
    cin>>count;
    int ss=count/150;//记录150的个数（基数）
    int temp=count%150;
    //这是花完150后剩下的个数。
    int ss2=temp/50;
    if(ss>=ss2)//如果150的次数比较多，说明150全都可以变成200
    {
        cout<<temp%50<<endl;
    }
    else {
        cout<<temp-ss*50<<endl;
    }

}
    system("pause");
    return 0;
}
