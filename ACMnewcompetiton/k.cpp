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
//循环法实现
/***********************/
/** This is C++ code. **/
/**   Comb  Example   **/
/***********************/
bool next_comb(int* comb, const int n, const int k) {
	int i = k - 1;
	const int e = n - k;
	do
		comb[i]++;
	while (comb[i] > e + i && i--);
	if (comb[0] > e)
		return 0;
	while (++i < k)
		comb[i] = comb[i - 1] + 1;
	return 1;
}
int main() {
	int n, k;
	cout << "comb(n,k):" << endl;
	cin >> n >> k;
	if (n < k || k <= 0)
		return 0;
	int* comb = new int[k];
	for (int i = 0; i < k; i++)
		comb[i] = i;
	do
		for (int i = 0; i < k; cout << ((++i < k) ? ',' : '\n'))
			{
                cout << comb[i] + 1<<"here";

            }
	while (next_comb(comb, n, k));
	delete[] comb;
    system("pause");
	return 0;
}
// void Pern(int list[], int k, int n) {   //  k表示前k个数不动仅移动后面n-k位数
//     if (k == n - 1) {
//         for (int i = 0; i < n; i++) {
//             printf("%d", list[i]);
//         }
//         printf("\n");
//     }else {
//         for (int i = k; i < n; i++) {   //  输出的是满足移动条件所有全排列
//             swap(list[k], list[i]);
//             Pern(list, k + 1, n);
//             swap(list[k], list[i]);
//         }
//     }
// }


// int main(){
//     int c[]={1,2,3,4,5,6,7,8,9,10};

//     Pern(c,1,10);
//     system("pause");
//     return 0;
// }
