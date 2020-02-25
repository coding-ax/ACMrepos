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
int a[maxn];
bool cmp(int a,int b){
    return a>b;
}
bool mark[1005];
int main(){
    int n,m;
    int count=1;
    while(cin>>m>>n&&m!=0&&n!=0){
        for(int i=0;i<n;i++)
        cin>>a[i];
        getchar();
        for(int i=0;i<n*m;i++)
        mark[i]=false;//初始化全都没打出
        sort(a,a+n,cmp);//降序排列手中牌
        int ans=0;
        for(int i=0;i<n;i++){
            int index=a[i]-1;//查看当前牌面
            bool flag=false;//标志是否有更大的数字
                //标记打出
                mark[index]=true;
                for(int i=index+1;i<n*m;i++){
                    if(mark[i]==false){//有更大的未打出的牌
                        flag=true;
                        mark[i]=true;//更大牌打出,
                        break;
                    }
                }
                if(!flag)ans++;
        }
        cout<<"Case "<<count++<<": "<<ans<<endl;
    }
    system("pause");
    return 0;
}
