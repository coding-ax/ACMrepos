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
#include<map>
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;
int three(int a,int b,int c){
    return (a&b&c)|(~a&~b&~c);
}
int a[maxn];
int main(){
    ios::sync_with_stdio(false);
    while(1){
        map<int,int> temp;
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>a[i];
            temp[a[i]]++;
        }
         int ans=0;
        //  for(int i=0;i<t;i++){
        //      ans^=a[i];//只对于出现两次的有用
        //  }
        for(int i=0;i<t-2;i++){

        }
        // for(int i=0;i<t;i++){
        //     if(temp[a[i]]==1){
        //         ans=a[i];
        //         break;
        //     }
        // }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}
