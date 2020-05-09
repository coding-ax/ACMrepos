#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

const int maxN = 110;
const int INF = 0x3f3f3f3f;
/**
 * @NAME:getNum
 * @TODO:获取字符串s从位置x到位置y [x,y]的数值大小
 * @Params: string s int x int y
*/
int getNum(string s, int x, int y)
{
    int ans = 0, k = 1;
    for (int i = y - 1; i >= x - 1; i--)
    {
        ans += k * (s[i] - '0');
        k *= 10;
    }
    return ans;
}

/**
 * @NAME:getLargestNum
 * @TODO:寻找最大乘积值
 * @Params: string s int n int k
*/
int getLargestNum(string s, int n, int k)
{
    // 定义dp数组用于存储当前n位k段的最大乘积值
    int dp[n + 1][k + 1];
    //由于0段0位的时候都为1，其他的都初始化为0
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int i = 0; i <= k; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            dp[i][j] = 0;
        }
    }

    //进行dp搜索
    //分段数递增
    for (int i = 1; i <= k; i++)
    {
        //位数递增
        for (int j = 1; j <= n; j++)
        {
            for (int c = j; c >= i; c--)
            {
                /**
                 * getNum是当前段数和位数
                 * dp[c-1][i-1]是上次对应的结果
                */
                int temp = getNum(s, c, j) * dp[c - 1][i - 1];
                if (temp > dp[j][i])
                {
                    //更新最大值
                    cout << "dp[" << j << "][" << i << "]:" << dp[j][i] << "->" << temp << endl;
                    dp[j][i] = temp;
                }
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][k];
}
int main()
{

    int n, k;
    string s;
    // ofstream outfile("input.txt");
    // outfile.close();
    ifstream infile("input.txt");
    if (!infile.is_open())
    {
        cout << "the file opened has error" << endl;
        return 0;
    }
    while (!infile.eof())
    {
        while (infile >> n >> k)
        {
            infile >> s;
            if(s==""){
                break;
            }
            ofstream outfile("output.txt",ios::app);
            if (!outfile.is_open())
            {
                cout << "can not find the file" << endl;
                system("pause");
                return 0;
            }
            outfile << getLargestNum(s, n, k) << endl;
            outfile.close();

            /**
         *  @TEST:getNum
         *  @RESULT:OK
         * */
            //  cout << getNum("1235", 2, 3) << endl;
            //   cout << getNum("12345", 1,3) << endl;
        }
    }
    infile.close();

    system("pause");
    return 0;
}
