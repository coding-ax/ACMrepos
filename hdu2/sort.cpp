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

int temp[maxn];
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>temp[i];
        }
        sort(temp,temp+t);
        for(int j=0;j<t;j++)
        if(j!=t-1)
        cout<<temp[j]<<' ';
        else{
            cout<<temp[j]<<endl;
        }
    }

    system("pause");
    return 0;
}
