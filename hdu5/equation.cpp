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

double ans(double x){
    double n= x*x*x*x*8.0+x*x*x*7.0+x*x*2.0+3.0*x+6.0;
    return n;
}
double round(double number, unsigned int bits) {
    stringstream ss;
    ss << fixed << setprecision(bits) << number;
    ss >> number;
    return number;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        double num;
        cin>>num;
        double temp1,temp2;
        temp1=ans(0.00);
        temp2=ans(100.00);
         if(num<temp1||num>temp2)
         {
             cout<<"No solution!"<<endl;
             continue;
         }
         double left,right,mid;
         left=0.0;right=100.0;
         while(right-left>=1e-8){
             mid=(left+right)/2.0;
             double temp=ans(mid);
             if(temp<num)
             left=mid;
             else
             {
                 right=mid;
             }
         }
        printf("%.4lf\n",mid);
        // for(int i=0;i<=100;i++){

        // if(ans(i)<=num&&ans(i+1.0)>num)
        // {
        //     for(double j=0.0;j<=1.0;j+=0.0001){
        //          //cout<<i+j<<endl;
        //         if(ans(i+j)<=num&&ans(i+j+0.0001)>num)
        //         {
        //             cout<<"ans:"<<ans(i+j)<<endl;
        //              cout<<"ans:"<<ans(i+j+0.0001)<<endl;
        //             cout<<round(i+j+0.00005,4)<<endl;
        //             find=1;
        //             break;
        //         }
        // }
        // }

    }
    system("pause");
    return 0;
}
