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

string doubleNumSum(string a, string b)
{
    string ans;
    //如果长度不等，补�?0，交换之（保证长度：a>b)
    if (a.length() < b.length())
    {
        string temp;
        temp = a;
        a = b;
        b = temp;
    }
    int placehold = a.length() - b.length();
    b.insert(b.begin(), placehold, '0');
    //开始遍历找结果
    //定义计数器c，下次进位d,单次结果m，承载容器answer
    int c = 0;
    int d = 0;
    int m = 0;
    string answer = "";
    /*
    d=a&b|(c&(a^b));
    m=a^b^c;
    */
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int aTemp = a[i] - '0';
        int bTemp = b[i] - '0';
        d = (aTemp & bTemp) | (c & (aTemp ^ bTemp));

        m = aTemp ^ bTemp^c;
        c = d;
        // cout << i << "count:"<<"a="<<aTemp<<"b="<<bTemp<<"c="<<c
        //      << "d=" << d << endl;
        // cout << i << "count:"
        //      << "m=" << m << endl;
        answer.insert(answer.begin(), (m + '0'));
    }
    if (c != 0)
    {
        answer.insert(answer.begin(), '1');
    }
    return answer;
}
int main()
{
    ios::sync_with_stdio(false);
    string a, b;
    while (cin >> a >> b)
        cout << doubleNumSum(a, b) << endl;
    // cout << a << "  " << a.length() << endl;
    // cout << b << " " << b.length() << endl;
    system("pause");
    return 0;
}
