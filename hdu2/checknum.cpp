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
    int a,b;
    //经过我的数学推导:(a+-(a^2-4b)^0.5))/2为结果，如果这个值在范围内，就可以
    while(cin>>a>>b){
        if(a==0&&b==0)break;
        int temp1=(a+sqrt((a*a-4*b)))/2.0;
        int temp2=(a-sqrt((a*a-4*b)))/2.0;
        if(temp1+temp2==a&&temp1*temp2==b)
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    system("pause");
    return 0;
}
