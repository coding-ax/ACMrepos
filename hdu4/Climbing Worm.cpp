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
   int n,u,d;
    while(cin>>n>>u>>d&&n!=0){
         int mintue=0;
         int count=0;
        while(1){
            count+=u;
            mintue++;
            if(count>=n)
            break;
            count-=d;
            mintue++;
        }
        cout<<mintue<<endl;
    }
    system("pause");
    return 0;
}
