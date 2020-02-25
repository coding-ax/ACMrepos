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
void count2(int n1,int k1,long long *s);
const int maxn = 1100;
const int INF = 0x3f3f3f3f;

bool cmp(long long c,long long b){
    return c>b;
}
bool is_prime(long long n){
    float n_sqrt;
	if(n==2 || n==3) return true;
	if(n%6!=1 && n%6!=5) return false;
	n_sqrt=floor(sqrt((float)n));
	for(int i=5;i<=n_sqrt;i+=6)
	{
	    if(n%(i)==0 | n%(i+2)==0) return false;
	}
        return true;
}
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
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n, k;
    long long s[maxn];
	//cout << "comb(n,k):" << endl;
	cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
	int* comb = new int[k];
    long long temp[1000];
    int countnum=0;
	for (int i = 0; i < k; i++)
		comb[i]=i;
	do{
        temp[countnum]=0;
		for (int i = 0; i < k; i++)
			{
                //cout << "c:"<<comb[i] + 1<<" ";
                //cout<<"s:"<<s[comb[i]]<<" ";
                temp[countnum]+=s[comb[i]];
            }
            //cout <<  temp[countnum]<<endl;
           countnum++;
        }

	while (next_comb(comb, n, k));
    sort(temp, temp+countnum,cmp);
    int flag=false;
    for(int i=0;i<countnum;i++){
        if(is_prime(temp[i]))
        {
            cout<<temp[i]<<endl;
             flag=true;
            break;
        }
    }
    if(!flag)cout<<-1<<endl;

    delete[] comb;


       // sort(s,s+m,cmp);
  //      countnum=0;
    }
    system("pause");
    return 0;
}
