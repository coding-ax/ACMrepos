#include <iostream>
#include <algorithm>
using namespace std;

int counter[10000];
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> counter[i];
        }
        sort(counter, counter + n);
        int count = 1;
        int prev = counter[0] + k;
        for (int i = 1; i < n; i++)
        {
            if (counter[i] > prev)
            {
                count++;
                prev = counter[i] + k;
            }
        }
        cout << count << endl;
    }
    return 0;
}
