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

const int maxn = 11000;
const int INF = 0x3f3f3f3f;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
      int cun=0;
    bool flag=false;
    double max=0;
    double max2=0;
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            int w,p;
            cin>>w>>p;
            if(p!=0&&!flag){
                if(w*1.0/p>max2)
                {
                    max2=w*1.0/p;
                    cun=j;
                }
            }
            else if(p==0){
                flag=true;
                if(w>max){
                    max=w;
                    cun=j;
                }
            }
        }
        if(flag)cout<<cun<<endl;
        else{
            cout<<cun<<endl;
        }
    }

    system("pause");
    return 0;
}
