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
#include <iomanip>
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;

int result(double score){
    switch((int)score/10){
        case 10:
        case 9: return 4;
        case 8:return 3;
        case 7:return 2;
        case 6:return 1;
        default:return 0;
    }
}
int main(){
    int n;
    while(cin>>n){
        double final=0;
        double ssum=0,psum=0;
        for(int i=0;i<n;i++){
            double s,p;
            cin>>s>>p;
            if(p!=-1){
                ssum+=s;
                psum+=result(p)*s;
            }
            else continue;
        }
        if(ssum!=0)
      printf("%.2f\n",psum/ssum);
        else
        {
            cout<<-1<<endl;
        }

    }


    system("pause");
    return 0;
}
