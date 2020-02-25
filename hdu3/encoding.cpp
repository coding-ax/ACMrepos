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
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string AX;
        cin>>AX;
        if(AX.length()<=1){//特殊处理
            cout<<AX<<endl;
            continue;
        }
        string ans="";//定义结果
        int count=0;//定义计数器
        char temp=AX[0];//首先令temp指向头
        for(int i=0;i<AX.size();i++){
            if(AX[i]==temp)//相等，计数器加1
            count++;
            else{
                if(count>1){//累加
                   cout<<count<<temp;
                   temp=AX[i];
                   count=1;
                }
                else{
                    cout<<temp;
                    temp=AX[i];
                    count=1;
                }
            }
        }
         if(count>1){//累加
                   cout<<count<<temp;
                  // ans+=temp;
                 //  temp=AX[i];
                  // count=1;
                }
                else{
                    cout<<temp;
                  //  temp=AX[i];
                  //  count=1;
                }
        cout<<endl;
    }

    system("pause");
    return 0;
}
