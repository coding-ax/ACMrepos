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
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;
int a[maxn];
bool squareNumCheck(int num){
        if(sqrt(num)==(int)sqrt(num))//判断是否为完全平方数
        return true;//是 返回
        else
        return false;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<n;i++){
            a[i]=0;
         }
        int num=1;
        a[1]=num;
        while(1){
        num++;
        int flag=0;
        for(int i=1;i<=n;i++){
          if(squareNumCheck(num+a[i])){
                a[i]=num;//只保存最近的
                break;
          }
          if(a[i]==0){
              a[i]=num;
              break;
          }
          if(i==n&&a[i]!=0&&!squareNumCheck(num+a[i])){
              flag=1;
          }
        }
        if(flag)break;
    }
    cout<<num-1<<endl;
    }
    system("pause");
    return 0;
}
