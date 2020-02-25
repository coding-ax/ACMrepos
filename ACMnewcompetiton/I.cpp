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
int a[maxn];

int main(){
        int N;
        cin>>N;
        while(N--){
        int sum;
        cin>>sum;
        int k=1;
        int cosum=0;
        int count;
        for(int i=1;sum>cosum;i++){
            cosum+=i;
            count=i;
           // cout<<count<<endl;
        }
        if(count%2!=0)
        cout<<"hyy"<<endl;
        else
        cout<<"wqy"<<endl;
        }
    system("pause");
    return 0;
}

