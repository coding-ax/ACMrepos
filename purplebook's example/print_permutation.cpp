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
//伪代码：
/*
void print_permutation(序列a,集合s){
    if(s为空) 打印序列
    else{
        从大到小依次考虑s的每个元素v
        print_permutation(序列a+v,集合s-v);
    }
}

*/
void print_permutation(int n,int *a,int cur){
    if(cur==n){//递归收拢条件：
        for(int i=1;i<=n;i++)
         printf("%d ",a[i]);
        printf("\n");
    }
    else {//递归开始的情况
        for(int i=1;i<=n;i++){
            bool ok=true;
            //查看当前位置是否已经加入数组
            for(int j=1;j<=cur;j++){
                if(i==a[j]){
                    ok=false;
                    break;
                }
            }
            if(ok){
                a[cur+1]=i;
                print_permutation(n,a,cur+1);
            }

        }
    }
}

void print_permutation(int n,int *a){
    for(int i=1;i<=n;i++){
        //cin>>a[i];
        a[i]=i;
    }
    sort(a+1,a+n+1);
    do
    {
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    } while (next_permutation(a+1,a+n+1));

}
int a[maxn];
int main(){
    ios::sync_with_stdio(false);
    int i;
    while(cin>>i){
        print_permutation(i,a);
    }
    while(cin>>i){
        print_permutation(i,a,0);//i,枚举的个数，a[]辅助数组,cur当前固定的位置（不进行排列）

    }
    system("pause");
    return 0;
}
