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
    //stream s;
    int a,b;
    while(cin>>a>>b)
   {
    int maxnum=max(a,b);
    int minnum=min(a,b);
    int num=maxnum;
    while(num%minnum){
        num+=maxnum;
    }
    cout<<num<<endl;
   }
    //system("pause");




}
