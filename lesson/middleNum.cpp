#define _CRT_SBCURE_NO_DEPRECATE
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
const int maxN = 110;
const int INF = 0x3f3f3f3f;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    //保证第二个最大,缩短距离：
    int n = nums1.size(), m = nums2.size();
    if (n > m)
    {
        return findMedianSortedArrays(nums2, nums1);
    }

    int LMax1, RMin1, LMax2, RMin2, c1, c2, lo = 0, hi = 2 * n;

    //二分查找：（使用#填补空位）
    while (lo <= hi)
    {
        c1 = (lo + hi) / 2;
        c2 = m + n - c1;

        LMax1 = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
        RMin1 = (c1 == 2 * n) ? INT_MAX : nums1[(c1) / 2];
        LMax2 = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
        RMin2 = (c2 == 2 * m) ? INT_MAX : nums2[(c2) / 2];

        if (LMax1 > RMin2)
        {
            hi = c1 - 1;
        }
        else if (LMax2 > RMin1)
        {
            lo = c1 + 1;
        }
        else
        {
            break;
        }
    }
    return (min(RMin1, RMin2) + max(LMax1, LMax2)) / 2.0;
}

int main()
{
    // ofstream outfile("input.txt");
    // outfile << "1 2 3 4";
    // outfile.close();
    ifstream infile("input.txt");
    if (!infile.is_open())
    {
        cout << "can not find the file" << endl;
        system("pause");
        return 0;
    }

    int n;
    vector<int> a;
    vector<int> b;
    int temp = 0;

    infile >> n;
    for (int i = 0; i < n; i++)
    {
        infile >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        infile >> temp;
        b.push_back(temp);
    }
    infile.close();

    double ans = findMedianSortedArrays(a, b);
    cout << ans;
    ofstream outfile("output.txt");
    if (!outfile.is_open())
    {
        cout << "can not find the file" << endl;
        system("pause");
        return 0;
    }
    outfile << ans;
    outfile.close();
    system("pause");
    return 0;
}
