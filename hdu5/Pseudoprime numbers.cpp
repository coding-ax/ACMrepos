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
typedef long long LL;
const int maxn = 110;
const int INF = 0x3f3f3f3f;
bool isPrime(long long x){
    if(x<=1)return false;
    int m=floor(sqrt(x)+0.5);
    for(int i=2;i<=m;i++){
        if(x%i==0)return false;
    }
    return true;
}
LL powerMod(LL x, LL n, LL m)//x^n%m
{
    LL res = 1;
    while (n > 0){
        if  (n & 1) //  判断是否为奇数，若是则true
            res = (res * x) % m;
        x = (x * x) % m;
        n >>= 1;    //  相当于n /= 2;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    long long p,a;
    while(cin>>p>>a&&a!=0&&p!=0){
        if(isPrime(p)){
            cout<<"no"<<endl;
            continue;
        }
        if(powerMod(a,p,p)==a){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
        }
    system("pause");
    return 0;
}
