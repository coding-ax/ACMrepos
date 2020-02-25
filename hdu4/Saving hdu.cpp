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
struct node{
    int pi;
    int mi;
}a[maxn];
bool cmp(node a, node b){
        return a.pi>b.pi;
}
int main(){
    int v,n;
    while(1){
        cin>>v;
        if(v==0)break;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i].pi>>a[i].mi;
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            if(v>a[i].mi){
                v-=a[i].mi;
                ans+=a[i].mi*a[i].pi;
            }
            else{
                ans+=a[i].pi*v;
                break;
            }
        }
        cout<<ans<<endl;
    }

    system("pause");
    return 0;
}
