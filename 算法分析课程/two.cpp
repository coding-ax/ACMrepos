
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

int Fun(int n)

{

    if (n <= 1)

        return 1;

    int First = Fun(n - 1);

    int Second = Fun(n - 2);

    int iSum = First + Second;
    cout << iSum << endl;
    return iSum;
}
int main()
{
    ios::sync_with_stdio(false);
    Fun(5);
    system("pause");
    return 0;
}
