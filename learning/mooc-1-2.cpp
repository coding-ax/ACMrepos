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
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

const int maxnum = 110;
const int INF = 0x3f3f3f3f;

int a[maxnum];
int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int min=INF;
        for(int i=n-1;i>0;i--){
            int temp=a[i]-a[i-1];
            if(temp<min){
                min=temp;
            }
        }
        cout<<min<<endl;
    }
    system("pause");
    return 0;
}
//dadoajisjadioasj
