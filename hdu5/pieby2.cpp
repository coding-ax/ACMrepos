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
const double pi=acos(-1.0);
const int maxn = 10010;
const int INF = 0x3f3f3f3f;
double r[maxn];

int main(){
    ios::sync_with_stdio(false);
    int t,n,f;
	cin>>t;
	while(t--)
	{
		cin>>n>>f;
		f++;
		double sum=0;
		for(int i=0;i<n;i++) {cin>>r[i]; r[i]=r[i]*r[i]*pi; sum+=r[i];}
		double low=0,high=sum/f,mid;
		while(high>low+1e-6)
		{
			int cnt=0;
			mid=(low+high)/2;
			for(int j=0;j<n;j++) cnt+=int(r[j]/mid);
			if(cnt>=f) low=mid;
			else high=mid;
		}
		printf("%.4lf\n",mid);
	}
    system("pause");
    return 0;
}
