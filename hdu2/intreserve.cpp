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

long long reserve(int num){
    int i=0;
    if(num==0)return 0;
    int dnum[maxn];
    long long result=0;
    int flag=0;//符号标记
    if(num<0)
    {
        flag=1;
        num=-num;//先正化
    }

        int count=0;
        while(num%10==0){
            count++;//统计末尾0的个数.
            num/=10;
        }
        while(num){
            dnum[i++]=num%10;
            num/=10;
        }
        for(int j=0;j<i;j++){
            result=result*10+dnum[j];
        }
        for(int j=0;j<count;j++){
            result=result*10;//补0
        }
        if(flag)
        return -result;
        else return result;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        long long temo=reserve(temp);
        cout<<temo<<endl;
    }

    system("pause");
    return 0;
}
