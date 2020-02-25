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

const int maxn = 3010;
const int INF = 0x3f3f3f3f;
bool cmp(long long a,long long b){
    return a>b;
}
long long a[maxn];
int main(){
    int n;
    ios::sync_with_stdio(false);
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,cmp);
        //先降序排列，然后遍历数组，剔除当前数据，直到数组为空。
       int count=1;
        int max;
       if(n>0)
        max=1;
       else max=0;
       long long temp=a[0];
       for(int i=1;i<n;i++){
           if(temp==a[i]){
               count++;
               if(count>max)
               max=count;
           }
           else{
               temp=a[i];
               count=1;
           }
       }
        cout<<max<<endl;
    }

    system("pause");
    return 0;
}
