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

const int maxn = 110;
const int INF = 0x3f3f3f3f;


int main(){
    ios::sync_with_stdio(false);
    long long an=1;
    for(int i=1;i<10;i++){
        cout<<"a"<<i<<":"<<an<<endl;
        an=an*an+1;
    }
    system("pause");
    return 0;
}
