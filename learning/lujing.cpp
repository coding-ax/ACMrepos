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

int dp[100][100];
int wayCount(int x,int y){
    for (int i = 1; i <= x;i++){
        dp[1][i] = 1;
        dp[0][i] = 1;
    }
    for (int i = 1; i <= y;i++){
        dp[i][1] = 1;
        dp[i][0] = 1;
    }
    for (int i = 2; i <= y;i++){
        for (int j = 2; j <= x;j++){
            dp[i][j] = dp[i - 1][j]+dp[i][j-1];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    return dp[y][x];
}
int main(){
    int x, y;
    while(cin>>x>>y){
        cout << wayCount(x, y) << endl;
    }
    system("pause");
    return 0;
}
