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

const int maxn = 20005;
const int INF = 0x3f3f3f3f;
int a[maxn];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,cmp);
        int count=0;
        int ans=0;
        while(true){
            int temp[3];
            if(n-count<3)break;
            for(int i=0;i<3;i++){
                temp[i]=a[count++];
            }
            ans+=temp[2];
        }
        cout<<ans<<endl;
    }

    system("pause");
    return 0;
}
