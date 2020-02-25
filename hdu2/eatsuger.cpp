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
    int n;
     scanf("%d",&n);//scanf("%lld",n)cin>>n;
    while(n--){
        int c;
        scanf("%d",&c);
        int Max=0;
        int temp;
        long long sum=0;
        for(int i=0;i<c;i++)
        {
           scanf("%d",&temp);
            if(temp>Max){
                sum+=Max;
                Max=temp;
            }
            else sum+=temp;
        }
        if(sum>=Max-1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    system("pause");
    return 0;
}
