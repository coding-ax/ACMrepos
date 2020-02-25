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

int score[maxn];
int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>score[i];
        }
        int ss,count=0;
        cin>>ss;
        for(int i=0;i<n;i++){
            if(ss==score[i])
            count++;
        }
        cout<<count<<endl;
    }
    system("pause");
    return 0;
}
