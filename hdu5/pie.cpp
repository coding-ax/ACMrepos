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

const int maxn = 10010;
const int INF = 0x3f3f3f3f;
int a[maxn];
const double pie=acos(-1.0);
double  square(int radius){//统计面积
        double ans;
        ans=radius*radius*pie*1.0;
        return ans;
}
// bool cmpUp(int a,int b){
//     return a>b;
// }
int main(){
    ios::sync_with_stdio(false);
    int  t;
    cin>>t;
    while(t--){
        int N,F;
        cin>>N>>F;
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
         sort(a,a+N);//默认升序
        int personNumber=F+1;
        //如果蛋糕够每个人分：
        if(personNumber<=N){
            double temp=square(a[N-personNumber]);
             cout<< fixed<<setprecision(4)<<temp<<endl;
            // printf("%lf.4\n",temp);
        }
        //如果蛋糕不够每个人单独切割：
        else{
            double temp1,temp2;
            temp1=square(a[0]);
            temp2=square(a[N-1])/(personNumber-N+1);
            if(temp1>temp2)//多人分最大份依然小于最少份
                cout<<fixed<<setprecision(4)<<temp2<<endl;
            //   printf("%lf.4\n",temp1);
                else{
                     cout<<fixed<<setprecision(4)<<temp1<<endl;
                   // printf("%lf.4\n",temp2);
                }
        }
    }
    system("pause");
    return 0;
}
