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

const int maxn = 1100;
const int INF = 0x3f3f3f3f;
struct  AX{
    int d;
    int s;
}a[maxn];
bool cmp(AX a,AX b){
    return a.s>b.s;
}
bool flag[maxn];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            flag[i]=false;
            cin>>a[i].d;
        }
        for(int i=0;i<n;i++){
            cin>>a[i].s;
        }
        sort(a,a+n,cmp);
        int ans=0;
        for(int i=0;i<n;i++){
            int index=a[i].d-1;
            while(index>-1){
               if(flag[index]==false){//往前插,寻找合适的插入位置
                    flag[index]=true;
                    break;
            }
            index--;
            }
            if(index==-1)//前面么得位置,扣分咯
            {
                ans+=a[i].s;
            }
        }
        cout<<ans<<endl;
    }

    system("pause");
    return 0;
}
