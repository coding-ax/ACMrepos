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
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        int first=100,second=100,num;
        for(int j=0;j<t;j++){
            cin>>num;
            if(num<=first){
                second=first;
                first=num;
            }
            else if(num>first&&num<=second){
                second=num;
            }
        }
        cout<<second<<endl;

    }

    system("pause");
    return 0;
}
