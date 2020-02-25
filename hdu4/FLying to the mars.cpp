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
bool cmp(int a,int b){
    return a>b;
}
int a[maxn];
bool mark[maxn];
int main(){
    int n;
    ios::sync_with_stdio(false);
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
            mark[i]=false;
        }
        sort(a,a+n,cmp);
        //先降序排列，然后遍历数组，剔除当前数据，直到数组为空。
        int flag=true;
        int ans=0;
        while(flag){
              int temp;
              int index=0;
              flag=false;
            for(int i=0;i<n;i++)
          {
                if(mark[i]==false){
                    index=i;
                    mark[i]=true;
                    temp=mark[i];
                    flag=true;//说明还有数据在
                    ans++;
                    //cout<<"ans"<<ans<<endl;
                    break;
                }
          }
          if(flag==false)break;
            for(int i=index+1;i<n;i++){
                if(temp!=a[i]){
                    mark[i]=true;
                    temp=a[i];
                }
            }
        }
        cout<<ans<<endl;
    }

    system("pause");
    return 0;
}
