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
bool isPrime(long long x){
    if(x<=1)return false;
    int m=floor(sqrt(x)+0.5);
    for(int i=2;i<=m;i++){
        if(x%i==0)return false;
    }
    return true;
};
vector<int> vec;
void findAllPrimeNum(long long num){
            if(num==1){
                // cout<<num<<" ";
                vec.push_back(num);
                return ;
            }
            if(num==2){
                 // cout<<num<<" ";
                  vec.push_back(num);
                return ;
            }
            if(isPrime(num)){
                // cout<<num<<" ";
                 vec.push_back(num);
                return;
            }
            int i;
            for( i=2;i<sqrt(num);i++){
                if(isPrime(i)&&num%i==0){
                    // cout<<i<<" ";
                     vec.push_back(i);
                    break;
                }
            }
            int nextNum=num/i;
            if(isPrime(nextNum)){
                // cout<<nextNum<<' ';
                vec.push_back(nextNum);
                return ;
            }
            else{
                findAllPrimeNum(nextNum);
            }
}
bool check(int num){
        int count1=0,count2=0;
        while(num){
            count1+=num%10;
            // cout<<num%10;
            num/=10;
        }
        // cout<<endl;
        // cout<<count1;
        for(int i=0;i<vec.size();i++){
            while(vec[i]){
                count2+=vec[i]%10;
                // cout<<vec[i]%10;
                vec[i]/=10;
            }
        }
        vec.clear();
        if(count2==count1){
            return true;
        }
        return false;
}
int main(){
    ios::sync_with_stdio(false);
    int num;
    while(cin>>num&&num!=0){
        for(long long i=num;;i++)
       {
           findAllPrimeNum(i);
        // for(int i=0;i<vec.size();i++){
        //     cout<<vec[i]<<" ";
        // }
        if (check(i)) {
          cout <<i<< endl;
          break;
        }
        }
    }
    system("pause");
    return 0;
}
