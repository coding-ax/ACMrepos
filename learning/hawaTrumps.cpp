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

const int maxN = 110;
const int INF = 0x3f3f3f3f;

int HamaTrumps(int num){
    if(num<=2)
    return num;
    else{
        return HamaTrumps(num - 1) + HamaTrumps(num - 2);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        cout << HamaTrumps(n) << endl;
    }
    system("pause");
    return 0;
}
