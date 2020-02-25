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
    int t;
    cin>>t;
    while(t--){
        string AX;
        cin>>AX;
        int count=0;
        for(int i=0;i<AX.size();i++){
            if(AX[i]>='0'&&AX[i]<='9')
            count++;
        }
        cout<<count<<endl;
    }
    system("pause");
    return 0;
}
