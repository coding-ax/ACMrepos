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

const int maxn = 11000;
const int INF = 0x3f3f3f3f;
bool cmp(int a,int b){//升序排列
    return a<b;
}
// void visit(int a){
//     cout<<a<<" ";
// }
int a[maxn];
int main(){
    int m;
    while(cin>>m){
         a[0]=30000;
        int ans=1;
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;//输入导弹高度
            bool flag=false;//添加标志用于判断当前导弹系统是否能接住
            for(int j=0;j<ans;j++){//遍历查看当前各个系统的接导弹的高度，另外这个数组要求升序排列。
                if(temp<=a[j]){//说明存在比temp高的的，也就是说当前可以接住这个导弹,
                    flag=true;
                    a[j]=temp;//修改为当前最小
                    sort(a,a+ans,cmp);//重新进行升序排列
                    //for_each(a, a+ans, visit);
                    break;
                }
            }
            if(!flag){
                //如果不幸没接住：temp加入数组
                a[ans++]=temp;
                sort(a,a+ans,cmp);
            }
        }
        cout<<ans<<endl;

    }

    system("pause");
    return 0;
}
